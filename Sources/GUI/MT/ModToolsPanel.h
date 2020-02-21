#ifndef __ModToolsPanel__
#define __ModToolsPanel__

/**
@file
Subclass of ModToolsPanel, which is generated by wxFormBuilder.
*/

#include "..\wxGUI.h"
#include <vector>

//// end generated include

/** Implementing ModToolsPanel */
class ModToolsPanel : public ModTools
{
	protected:
	// Handlers for ModToolsPanel events.
	virtual void OnItmSelected(wxFileDirPickerEvent& event) override;
	virtual void OnGdmSelected(wxFileDirPickerEvent& event) override;
	virtual void OnItemDataOpen(wxCommandEvent& event) override;
	
	struct f_config_s {
		char	pathITM[256] = { "0" };
		char	pathGDM[256] = { "0" };
	};

	public:
		/** Constructor */
		ModToolsPanel( wxWindow* parent );
	//// end generated class members
	virtual int				OpenITM(std::vector<char> &buf, std::string &pathITM);
	virtual int				OpenGDM(std::vector<char> &buf, std::string &pathGDM);
	virtual void			ReadGDM(std::vector<char> &buf, wxWindow* sub);
	virtual void			ReadITM(int id);
	virtual std::string		FIleToBuffer(std::vector<char> &buf, wxFilePickerCtrl *fpick);

};

#endif // __ModToolsPanel__