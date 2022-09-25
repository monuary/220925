#include<cstdio>
#include"헤더.h"

int main()
{
	Printer a;
	a.Init("저장된 text가 없습니다.");	//	디폴트 설정
	for (int i = 0; i < 1; i++)
	{
		int b;
		char c[PRINT::LEN];	//	scanf는 포인터를 하나 붙이는 것과 같으므로, 여기에 포인터를 붙이지 않는다고 이해했다.

		printf("번호를 입력해주세요. 1-저장 2-출력 3-종료\n입력 : ");
		scanf("%d", &b);	//	반환 값이 무시되었다고 하는데 무엇이 문제인지 모르겠다.

		if (b == 1)
		{
			printf("text를 입력해주세요 : ");
			scanf("%s", &c);
			a.Init(c);
			printf("\n");
			i -= 1;
		}
		else if (b == 2)
		{
			a.print();
			printf("\n\n");
			i -= 1;
		}
		else if (b == 3)
		{
			printf("종료합니다.\n");
		}
		else
		{
			printf("그런 명령은 존재하지 않습니다.\n\n");
			i -= 1;
		}
	}
	return 0;
}

//그냥 엔터를 쳤을 때에 대응시키는 방법을 모르겠다. 또한, 포인터에 대한 이해가 아직도 많이 부족하다.