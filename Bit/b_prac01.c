#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Skil_Num 3
#define Mob_Num 3
//符号なし整数をUINTで再定義
typedef unsigned int UINT;

typedef struct {			//Skill型構造体
	char name[20];			//スキル名
	int type;				//スキルの種類
	int use_mp;				//使用mp量
	int effect;				//スキル効果
}Skill;
typedef struct {			//Spec型構造体
	char name[20];			//名前
	int hp;					//HP
	int atk;				//攻撃力
	int def;				//防御力
	UINT state;				//状態
}Spec;
typedef struct {			//Chara型構造体
	Spec sp;				//Spec型構造体変数
	int maxhp;				//最大HP
	int mp;					//MP
	Skill skl[Skil_Num];	//Skill型構造体配列
}Chara;
typedef struct {			//Mob型構造体
	Spec sp;				//Spec型構造体変数
	int rate;				//状態異常攻撃発生レート%表記
}Mob;
enum BitState {
	Base = 0,			//0000 0000		通常状態
	Poison=1<<0,		//0000 0001		毒状態
	Sleep=1<<1,			//0000 0010		眠り状態
	Paralysis=1<<2,		//0000 0100		マヒ状態
	Burn=1<<3,			//0000 1000		やけど状態
	AtkUp=1<<4,			//0001 0000		攻撃力アップ状態
	AtkDown=1<<5			//0010 0000		攻撃力ダウン状態
};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);
main()
{
	UINT MyState = Base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	ChangeFlag(&MyState);

}
void DisplayStatus(UINT s)
{
	printf("****現在の状態****\n");
	if (s & Poison) {
		printf("毒\n");
	}
	if (s & Sleep) {
		printf("眠り\n");
	}
	if (s & Paralysis) {
		printf("まひ\n");
	}
	if (s & Burn) {
		printf("火傷\n");
	}
	if (s & AtkUp) {
		printf("攻撃力アップ\n");
	}
	if (s & AtkDown) {
		printf("攻撃力ダウン\n");
	}
	if (s == Base) {
		printf("通常状態\n");
	}
	printf("****************\n");

}
void ChangeFlag(UINT* s)
{
	int a;
	while (1) {
		printf("どの状態にしますか");
		printf("1:毒 2:眠り 3:まひ 4:火傷 5:攻撃力アップ 6:攻撃力ダウン 0:終了");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			* s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;

		}
	}
}
void ClearFlag(UINT* s)
{
	int a;
	while (1) {
		printf("どの状態を解除しますか");
		printf("1:毒  2:眠り  3:まひ  4:火傷  5:攻撃力アップ  6:攻撃力ダウン  0:終了");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s = Base;
			break;
		}
	}
}