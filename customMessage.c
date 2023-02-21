#include <stdio.h>
void main()
{
	int month;
	printf("1. January\n2. February\n3. March\n4. April\n5. May\n6. June\n7. July\n8. August\n9. September\n10. October\n11. November\n12. December\n");
	printf("Choose the number of your month of birth?\n");
	scanf("%d", &month);
	switch (month)
	{
	case 1:
		printf("You are a very enthusiastic person, you envision positive things rather than negative things, this is who you are, and this is why I love you so much. You are truly a good and positive being. I pray for you that this new month will not cease to start something new in your life. Amen.\n");
		break;
	case 2:
		printf("I hope your future wishes and dreams come true. You may have an amazing life.\n");
		break;
	case 3:
		printf("I hope your day is half as amazing as you are. I love you to the moon and beyond.\n");
		break;
	case 4:
		printf("Today is a good day to go out there and celebrate yourself, have the best bday ever, my dear. This is your month, and your big day is coming, so have lots of fun and enjoy it well.\n");
		break;
	case 5:
		printf("May life's brightest joys illuminate your path, and may each day's journey bring you closer to your dreams! I love celebrating with you.\n");
		break;
	case 6:
		printf("It is to be said people who are born in this month are interested in making friends and they have an awesome personality.\n");
		break;
	case 7:
		printf("On this special month of July, I wish you only the best in your life.\n");
		break;
	case 8:
		printf("You have done it, you have made the world proud. You continue to show humanity is worth more than gold.\n");
		break;
	case 9:
		printf("May your month be filled with joy, love, and happiness!\n");
		break;
	case 10:
		printf("You are my blessing. You are my happiness. You are my love.\n");
		break;
	case 11:
		printf("November born have zeal, have kindness in their hearts, like peacemaking, ambitious and are risk takers: this is a definition of you. You are very beautiful and very attractive, I love you from the bottom of my heart.\n");
		break;
	case 12:
		printf("Wishing you a day filled with love, joy, cake, balloons, candy canes, and snowmen!\n");
		break;
	default:
		printf("Invalid choice. Choose a number from 1 to 12\n");
		break;
	}