#pragma once

#ifndef CALCULATE_H_
#define CALCULATE_H_


#ifdef CALCULATE_EXPORTS
#define CALCULATE_API __declspec(dllexport)
#else
#define CALCULATE_API __declspec(dllimport)
#endif

//������ʽ��������ʽ��ģʽ��rad��deg����δ֪��x��ֵ�����ؽ���ַ���
//֧������ʵ����֧���������+��-��*��/��^
//֧��������pi��e
//֧�ֺ�����abs(),ln(),log(),sqrt(),fac(),���Ǻ�����sin(),cos(),tan()���������Ǻ�����asin(),acos(),atan()��
//�������׳��쳣����const char*�ַ�����ʾ����ע������ڴ棡
extern "C" CALCULATE_API char* operation(const char* expression, const char* mode, double x);

#endif/*CACULATE_H_*/