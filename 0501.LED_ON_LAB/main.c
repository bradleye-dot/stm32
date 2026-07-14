// 여기에 사용자 임의의 define을 작성하시오
#if 0

#define GPIOA_MODER	(*(int *) 0x40020000)
#define GPIOA_OTYPER (*(int *) 0x40020004)
#define GPIOA_ODR (*(int *) 0x40020014)

void Main(void)
{
	// LED GPA[5]를 출력(General Push Pull) 모드로 설정하시오

	GPIOA_MODER = 0x0400;
	GPIOA_OTYPER = 0x0000;

	// GPA[5] LED를 ON 시키도록 설정하시오

	GPIOA_ODR = 0x0020;
}

#endif

#define GPIOA_MODER	(*(unsigned long *) 0x40020000)
#define GPIOA_OTYPER (*(unsigned long *) 0x40020004)
#define GPIOA_ODR (*(unsigned long *) 0x40020014)

void Main(void)
{
	// LED GPA[5]를 출력(General open drain) 모드로 설정하시오

	GPIOA_MODER = 0x00004000;
	GPIOA_OTYPER = 0x00000080;

	// GPA[7] LED를 ON 시키도록 설정하시오

	GPIOA_ODR = 0x00000000;
}