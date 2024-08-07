#ifndef __HTTPparser__
#define __HTTPparser__

/**
@file
Subclass of HTTP, which is generated by wxFormBuilder.
*/

#include "..\wxGUI.h"

//// end generated include

/** Implementing HTTP */
class HTTPparser : public HTTP
{
	protected:
		// Handlers for HTTP events.
		virtual void OnGetToken( wxCommandEvent& event ) override;
	public:
		/** Constructor */
		HTTPparser( wxWindow* parent );
        const wxString wxHTTP_POST(const wxString& server, const wxString& page, const wxString& parameters);
	//// end generated class members

};

#endif // __HTTPparser__
