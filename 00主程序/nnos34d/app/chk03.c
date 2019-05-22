#include "api.h"

void NNOSMain(void)
{
	int langmode = api_getlang();
	static char s1[23] = {
		0x93, 0xfa, 0x96, 0x7b, 0x8c, 0xea, 0x83, 0x56, 0x83, 0x74, 0x83, 0x67,
		0x4a, 0x49, 0x53, 0x83, 0x82, 0x81, 0x5b, 0x83, 0x68, 0x0a, 0x00
	};
	static char s2[17] = {
		0xc6, 0xfc, 0xcb, 0xdc, 0xb8, 0xec, 0x45, 0x55, 0x43, 0xa5, 0xe2, 0xa1,
		0xbc, 0xa5, 0xc9, 0x0a, 0x00
	};
	static char s3[20] = {
		0xce, 0xd2, 0x20, 0xca, 0xc7, 0xa1, 0xa2, 0xa1, 0xa3, 0x0a, 0x00
	};
	int i;char j;
	if (langmode == 0) {
		api_printl("English ASCII mode\n");
	}
	if (langmode == 1) {
		api_printl(s1);
	}
	if (langmode == 2) {
		api_printl(s2);
	}
	if (langmode == 3) {
		api_printl("Chinese 你好！年年操作系统！\n");
		api_printl("这是一个GB2312字库测试程序。\n");
		api_printl("【汉字和符号显示正常。】");
		api_printl(s3);
		for(i=0xa1;i<0xcc;i++)
		{
			s3[0]=0xa1;
			j=i;
			s3[1]=j;
			s3[2]=0x00;
			api_printl(s3);
		}
	}
	api_return();
}
