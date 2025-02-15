///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.0-39-g3487c3cb)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
class STD_BITMAP_BUTTON;
class WX_HTML_REPORT_PANEL;

#include "dialog_shim.h"
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/bmpbuttn.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/radiobox.h>
#include <wx/choice.h>
#include <wx/checkbox.h>
#include <wx/gbsizer.h>
#include <wx/statbox.h>
#include <wx/panel.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class DIALOG_PLOT_SCHEMATIC_BASE
///////////////////////////////////////////////////////////////////////////////
class DIALOG_PLOT_SCHEMATIC_BASE : public DIALOG_SHIM
{
	private:

	protected:
		wxStaticText* m_staticTextOutputDirectory;
		wxTextCtrl* m_outputDirectoryName;
		STD_BITMAP_BUTTON* m_browseButton;
		wxBoxSizer* m_optionsSizer;
		wxRadioBox* m_plotFormatOpt;
		wxStaticText* m_staticText4;
		wxChoice* m_paperSizeOption;
		wxCheckBox* m_plotDrawingSheet;
		wxChoice* m_ModeColorOption;
		wxStaticText* m_staticText9;
		wxChoice* m_colorTheme;
		wxCheckBox* m_plotBackgroundColor;
		wxStaticText* m_lineWidthLabel;
		wxTextCtrl* m_lineWidthCtrl;
		wxStaticText* m_lineWidthUnits;
		wxStaticBoxSizer* m_HPGLOptionsSizer;
		wxStaticText* m_plotOriginTitle;
		wxChoice* m_plotOriginOpt;
		wxStaticText* m_penWidthLabel;
		wxTextCtrl* m_penWidthCtrl;
		wxStaticText* m_penWidthUnits;
		wxCheckBox* m_plotPDFPropertyPopups;
		wxStaticBoxSizer* m_otherOptions;
		wxCheckBox* m_openFileAfterPlot;
		WX_HTML_REPORT_PANEL* m_MessagesBox;
		wxStdDialogButtonSizer* m_sdbSizer1;
		wxButton* m_sdbSizer1OK;
		wxButton* m_sdbSizer1Apply;
		wxButton* m_sdbSizer1Cancel;

		// Virtual event handlers, override them in your derived class
		virtual void OnCloseWindow( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnUpdateUI( wxUpdateUIEvent& event ) { event.Skip(); }
		virtual void OnOutputDirectoryBrowseClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnPlotFormatSelection( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnPageSizeSelected( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnPlotCurrent( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnPlotAll( wxCommandEvent& event ) { event.Skip(); }


	public:

		DIALOG_PLOT_SCHEMATIC_BASE( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Plot Schematic Options"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER );

		~DIALOG_PLOT_SCHEMATIC_BASE();

};

