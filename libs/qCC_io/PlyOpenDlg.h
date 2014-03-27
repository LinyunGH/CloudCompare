//##########################################################################
//#                                                                        #
//#                            CLOUDCOMPARE                                #
//#                                                                        #
//#  This program is free software; you can redistribute it and/or modify  #
//#  it under the terms of the GNU General Public License as published by  #
//#  the Free Software Foundation; version 2 of the License.               #
//#                                                                        #
//#  This program is distributed in the hope that it will be useful,       #
//#  but WITHOUT ANY WARRANTY; without even the implied warranty of        #
//#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         #
//#  GNU General Public License for more details.                          #
//#                                                                        #
//#          COPYRIGHT: EDF R&D / TELECOM ParisTech (ENST-TSI)             #
//#                                                                        #
//##########################################################################

#ifndef CC_PLY_OPEN_DIALOG
#define CC_PLY_OPEN_DIALOG

//GUIs generated by Qt Designer
#include <ui_openPlyFileDlg.h>

//Qt
#include <QStringList>

//system
#include <vector>

class QComboBox;

//! Dialog for configuration of PLY files opening sequence
class PlyOpenDlg : public QDialog, public Ui::PlyOpenDlg
{
    Q_OBJECT

public:
    PlyOpenDlg(QWidget* parent=0);

	void setDefaultComboItems(const QStringList& stdPropsText);
	void setListComboItems(const QStringList& listPropsText);

	//! Standard comboboxes
	std::vector<QComboBox*> m_standardCombos;
	//! List-related comboboxes (faces, etc.)
	std::vector<QComboBox*> m_listCombos;
	//! SF comboboxes
	std::vector<QComboBox*> m_sfCombos;

public slots:
	void addSFComboBox(int selectedIndex = 0);

protected slots:
    void testBeforeAccept();

signals:
    void fullyAccepted();

protected:

	//! Standard comboboxes elements
	QStringList m_stdPropsText;
	//! List-related comboboxes elements
	QStringList m_listPropsText;

};

#endif
