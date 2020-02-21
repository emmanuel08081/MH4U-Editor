#ifndef __GLpanelParser__
#define __GLpanelParser__

/**
@file
Subclass of GLpanel, which is generated by wxFormBuilder.
*/

#include "..\wxGUI.h"
#include "EqEditorParser.h"

//// end generated include

/** Implementing GLpanel */
class GLpanelParser : public GLpanel
{
	protected:
		// Handlers for GLpanel events.
		virtual void OnStatusTypeChange( wxCommandEvent& event ) override;
		virtual void OnCopy( wxCommandEvent& event ) override;
		virtual void OnPaste( wxCommandEvent& event ) override;
		virtual void OnSave( wxCommandEvent& event ) override;
	public:
		/** Constructor */
		GLpanelParser( wxWindow* parent );
	//// end generated class members
        void	PopulateData();
        void	ParseData();
        void	SaveData();


        int		itemID;
    private:
        EqEditorParser* MainEditor;

};

#endif // __GLpanelParser__