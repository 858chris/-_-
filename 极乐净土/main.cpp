#include<graphics.h>
#include<Windows.h>
#include<MMSystem.h>		//����������Ҫ��ͷ�ļ�
#pragma comment(lib,"winmm.lib");		//���߱�����������������ļ�����C++����Ŀ⣩����Ҫ����ⲿ�Ŀ��ļ�����������

int main(void){
	initgraph(800,513);

	loadimage(0,_T("10.jpg"));		//VC�����������⣬������Ҫ��_Tת���ַ����ı����ʽ
	mciSendString(_T("play ���־���.mp3 repeat"),0,0,0);		//�ظ�����MP3

	system("pause");
	closegraph();
	return 0;
}