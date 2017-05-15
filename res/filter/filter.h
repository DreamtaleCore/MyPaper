#ifndef __FILTER_H
#define __FILTER_H
#include "sys.h"

#define Q_angle 0.01      // �Ƕ��������Ŷ�
#define Q_omega 0.0003    // ���ٶ��������Ŷ�
#define R_angle 0.01      // ��������

extern u8 filted_mode;

float First_order_filter(float Com_angle,float angle_pt,float angle,float dt);// һ�׻����㷨
float Second_order_filter(float Com2_angle,float angle_pt,float angle,float dt);// ���׻����㷨
float Kalman_filter(float Klm_angle,float angle_pt,float angle,float dt);// �������˲�

#endif
