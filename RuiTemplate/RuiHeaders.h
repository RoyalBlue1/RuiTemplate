#pragma once



#include <intrin.h>
#include <cstddef>
#include <stdint.h>
#include <cmath>
#include <algorithm>

typedef int _DWORD;
typedef long long _QWORD;
typedef char _BYTE;


struct Vector2 {
	float x;
	float y;
};

struct Vector3 {

	float x;
	float y;
	float z;
};

struct Color {
	float red;
	float green;
	float blue;
	float alpha;
};


struct unknownGlobalsStruct
{
	float float_0[3];
	float float_C;
	_DWORD dword_10;
	float float_14;
	_DWORD dword_18;
	float float_1C[3];
	float float_28;
	float float_2C[3];
	_DWORD dword_38;
	float float_3C;
};

static_assert(sizeof(unknownGlobalsStruct)==0x40);



struct RuiGlobals
{
	_BYTE localToWorldMatrix[48];
	Vector3 camOriginLocal;
	Vector3 localPlayerPos;
	float screenWidth;
	float screenHeight;
	_BYTE gap_48[64];
	uint64_t frameTime;
	float currentTime;
	float uiTime;
	int isKillReplay;
	int isUsingController;
	int isAlive;
	int isSpectating;
	int isMenuOpen;
	int isPhaseShifted;
	float globalAdsFrac; //adsfrac
	Vector3 friendlyTeamColor;
	Vector3 enemyTeamColor;
	Vector3 partyTeamColor;
	float announcementChangeTime;
	int announcementIsActive;
};


struct RuiInstance
{
	void *header; //original type RuiHeader
	float canvasWidth;
	float canvasHeight;
	float canvasWidthRatio;
	float canvasHeightRatio;
	void *v1;//original type struct_v1
	__int64 createTimeStamp;
	_BYTE byte_28;
	_BYTE error;
	_BYTE gap_2A[14];
	void *pvoid_38;// original type ruiUnknown2
	char dataValues[1];
};


struct RuiFunctions_t
{
	void (__fastcall *setHidden)(RuiInstance *a1);
	void (__fastcall *setNoRender)(RuiInstance *a1);
	__int64 (__fastcall *SetErrorWithReason)(RuiInstance *a1, const char *a2);
	__m128 *(__fastcall *GetTransformSize)(RuiInstance *a1);
	__m128 (__fastcall *GetTextSize)(RuiInstance *a1, unsigned int a2);
	double (__fastcall *unknown_5)(RuiInstance *a1, int a2, int a3);
	void (__fastcall *executeTransform)(RuiInstance *a1, int a2);
	const char *(*printf)(RuiInstance *a1, const char *format, ...);
	const char *(*localize)(RuiInstance *a1, const char *format, ...);
	const char *(__fastcall *toUpper)(RuiInstance *a1, const char *a2);
	__m128 (__fastcall *unknown_10)(__m128 *a1);
	__m128 (__fastcall *unknown_11)(float a1);
	float (__fastcall *randomFloat)(RuiInstance *a1);
	__int64 (__fastcall *project3d)(__int64 a1, __int64 a2, Vector3* a3);
	__m128 (__fastcall *unknown_14)(__int64 a1);
	int (__fastcall *LoadAsset)(RuiInstance *a1, const char *assetPath);
	const char *(__fastcall *unknown_16)(RuiInstance *a1, int a2);
	float (__fastcall *map_v1)(RuiInstance *a1, __int64 a2, float a3);
	__m128 (__fastcall *map_v2)(__int64 a1, __int64 a2, float a3);
	__m128 (__fastcall *map_v3)(__int64 a1, __int64 a2, __int64 a3);
	__m128 (__fastcall *map_v4)(__int64 a1, __int64 a2, __int64 a3);
};
