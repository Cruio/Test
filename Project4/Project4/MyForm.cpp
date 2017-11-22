#include "MyForm1.h"
#include "MyForm.h"
#include "opencv2\opencv.hpp"
#include "opencv2\core.hpp"
#include "opencv2\highgui.hpp"
#include "opencv2\imgcodecs.hpp"
#include "opencv2\imgproc.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;
using namespace std;
using namespace cv;



[STAThreadAttribute]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project4::MyForm1 form;
	Application::Run(%form);
	


	return 0;
}





