// MylibTest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

#include <src\libReader\UFgetMatReader.h>
//#include <src\libReader\InpDataReader.h>

int main()
{
    std::cout << "Hello World!\n"; 

	using namespace HBXFEMDef;
	HBXFEMDef::UFgetMatReader  g_UFgetMatReader("bcsstk03.mat", "G:\\SuiteSparse-2.1.1\\UFget\\mat\\HB");
	bool _res = g_UFgetMatReader.SetInputData();
	HBXDef::_CSRInput<HBXDef::UserCalPrec>* _tmpCSR = g_UFgetMatReader.GetStiffMat();

//	using namespace HBXFEMDef;
//	HBXFEMDef::BaseReader* g_InpDataReader = HBXFEMDef::InstanceInpReader("EltProperty.xml", "F:\\data_from_HBX_phd\\VS2015\\FEM_CUDA_Boost_V2");
//	g_InpDataReader->SetSourceFilePath("spaceshuttle_quadmain.inp", "C:\\Users\\hbx\\Desktop\\");
//	g_InpDataReader->SetInputData();
//	InputRecord* g_Record = g_InpDataReader->GetInputRecord();
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
