#ifndef _9_PNG_H
#define _9_PNG_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char _9_png[] =
{
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 
	0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0xB6, 
	0x00, 0x00, 0x00, 0x0D, 0x08, 0x06, 0x00, 0x00, 0x00, 0x04, 
	0xFD, 0x94, 0xB2, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47, 
	0x42, 0x00, 0xAE, 0xCE, 0x1C, 0xE9, 0x00, 0x00, 0x00, 0x04, 
	0x67, 0x41, 0x4D, 0x41, 0x00, 0x00, 0xB1, 0x8F, 0x0B, 0xFC, 
	0x61, 0x05, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 
	0x00, 0x00, 0x0E, 0xC4, 0x00, 0x00, 0x0E, 0xC4, 0x01, 0x95, 
	0x2B, 0x0E, 0x1B, 0x00, 0x00, 0x00, 0x86, 0x49, 0x44, 0x41, 
	0x54, 0x68, 0x43, 0xED, 0xD9, 0xAD, 0x0D, 0x84, 0x40, 0x14, 
	0xC4, 0xF1, 0xB7, 0xA0, 0x09, 0x0D, 0x20, 0xE9, 0xE0, 0xF4, 
	0x06, 0x8D, 0xA2, 0x2C, 0x4A, 0xC2, 0x22, 0x56, 0xD2, 0xC5, 
	0x69, 0x0A, 0x38, 0x75, 0x7C, 0xBD, 0xE0, 0x48, 0x50, 0x84, 
	0x4C, 0xFE, 0xBF, 0x64, 0x33, 0x53, 0xC0, 0xE4, 0x99, 0x0D, 
	0x66, 0xF6, 0x5F, 0x1F, 0x20, 0x25, 0xF3, 0x04, 0xA4, 0x9C, 
	0x17, 0x7B, 0xAE, 0xEA, 0x2D, 0x6E, 0x2B, 0xFB, 0x9F, 0xB7, 
	0x67, 0xE4, 0xDD, 0xD7, 0xDB, 0x33, 0x42, 0xE1, 0xE5, 0x42, 
	0xD3, 0x4E, 0xDE, 0xDE, 0x69, 0x1C, 0x3E, 0xDE, 0x0E, 0x29, 
	0x25, 0x6F, 0xDA, 0x62, 0x8C, 0x7B, 0x72, 0xB1, 0x21, 0x89, 
	0x61, 0x43, 0x12, 0xC3, 0x86, 0x24, 0x86, 0x0D, 0x49, 0x0C, 
	0x1B, 0x92, 0x18, 0x36, 0x24, 0x31, 0x6C, 0x48, 0x62, 0xD8, 
	0x90, 0xC4, 0x97, 0x3A, 0x24, 0x71, 0xB1, 0x21, 0xC8, 0x6C, 
	0x01, 0x86, 0x23, 0x0D, 0x15, 0x08, 0x27, 0x60, 0x94, 0x00, 
	0x00, 0x00, 0x00, 0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 
	0x82, 
};

wxBitmap& _9_png_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( _9_png, sizeof( _9_png ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_PNG );
	static wxBitmap bmp( image );
	return bmp;
}


#endif //_9_PNG_H