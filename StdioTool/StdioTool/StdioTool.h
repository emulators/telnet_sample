// StdioTool.h
#pragma once
#include <stdio.h> 
#include "Stdafx.h"
#include <conio.h>
#include <windows.h>

using namespace System;

namespace StdioTool 
{
	
	//http://social.msdn.microsoft.com/Forums/en-US/vcgeneral/thread/192c888a-2994-48aa-bb17-ec95f03535b0
	//http://broadcast.oreilly.com/2010/08/understanding-c-text-mode-games.html
	//http://msdn.microsoft.com/zh-tw/library/windows/desktop/ms682073(v=vs.85).aspx
	public ref class stdio
	{
	public:

		//�i�H�䴩big5���T��X�C�L,�]�A�����ݩ�
		void print_asii ( char c  )
		{
			printf("%c",c);
		}

		//�i�H�䴩big5����������byte��J
		char get_char()
		{
			return _getch();
		}

		void text_effect_underline() //���u��@
		{
		}

		void text_effect_blink() //�{�{
		{
		}
	};
}
