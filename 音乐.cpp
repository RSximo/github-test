#include<graphics.h>
#include<Windows.h>
#include<MMSystem.h> //����������Ҫ��ͷ�ļ�
#pragma comment(lib,"winmm.lib")//���߱��������ؿ��ļ�

int main(){
	initgraph(800,513);

	loadimage(0,"1.png");

//	mciSendString("open 1.mp3",0,0,0);
	mciSendString("play ������-����.mp3 wait",0,0,0);
	system("pause");
}
