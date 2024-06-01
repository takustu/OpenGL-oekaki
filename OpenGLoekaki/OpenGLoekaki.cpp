// OpenGLoekaki.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <gl/glut.h>

void myDisplay()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3d(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	// 星の描画
	// 頂点1
	glColor3f(1.0, 0.0, 1.0);
	glVertex2f(0.0f, 0.9f);
	// 頂点2
	glColor3f(0.0, 1.0, 1.0);
	glVertex2f(-0.6f, -0.9f);
	// 頂点3
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(0.9, 0.3);
	// 頂点4
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-0.9, 0.3);
	// 頂点5
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(0.6, -0.9);
	// 頂点6
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(0.0, 0.9);
	glEnd();
	glutSwapBuffers();
}

void myKeyboard(unsigned char key, int x, int y)
{
	if (key == 0x1B) exit(0);
}

void myInit(char* progname)
{
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow(progname);
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	myInit(argv[0]);
	glutKeyboardFunc(myKeyboard);
	glutDisplayFunc(myDisplay);
	glutMainLoop();
	return 0;
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
