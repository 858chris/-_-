#include<graphics.h>
#include<Windows.h>
#include<MMSystem.h>		//播放音乐需要的头文件
#pragma comment(lib,"winmm.lib");		//告诉编译器，加载这个库文件（非C++里面的库），需要这个外部的库文件来播放音乐

int main(void){
	initgraph(800,513);

	loadimage(0,_T("10.jpg"));		//VC编译特有问题，如有需要用_T转换字符串的编码格式
	mciSendString(_T("play 极乐净土.mp3 repeat"),0,0,0);		//重复播放MP3

	system("pause");
	closegraph();
	return 0;
}