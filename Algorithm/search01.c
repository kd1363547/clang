#include<stdio.h>
main() {
	int d[10] = { 10,5,30,77,16,3,47,29,37,33 };
	int i, s;
	printf("探索地sを入力");
	scanf("%d", &s);
	for (i = 0; i < 10; i++) {
		if (s == d[i]) {
			break;
		}
	}
	if (i == 10) {
		printf("見つからなかった");
	}
	else {
		printf("探索地%dをd[%d]で発見",s, i);
	}
}