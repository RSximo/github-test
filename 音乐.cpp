#include<graphics.h>
#include<Windows.h>
#include<MMSystem.h> //播放音乐需要的头文件
#pragma comment(lib,"winmm.lib")//告诉编译器加载库文件

int main(){
	initgraph(800,513);

	loadimage(0,"1.png");

//	mciSendString("open 1.mp3",0,0,0);
	mciSendString("play 尹昔眠-画家.mp3 wait",0,0,0);
	system("pause");
}
