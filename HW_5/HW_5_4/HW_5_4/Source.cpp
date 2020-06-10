
#include <cstdio>
#include <cstring>

struct tags
	{
		char name[31];
		char artist[31];
		char album[31];
		char year[5];
		char comment[31];
		char genre;

	};

int main(void)
	{
		FILE *fp;

		if((fp = fopen("1.mp3", "rb")) == NULL)
			{
				printf("Error open file \n");
				getchar();
				return 1;
			}
		fseek(fp, -128, SEEK_END); 

		char ch, strt[4];
		for(int i = 0; i <= 2; i++)
			{
				strt[i] = getc(fp);
			}
		strt[3] = '\0';
		int t;
		tags track;
		printf("Title tag: %s \n", strt);
		if(!strcmp(strt, "TAG")) 
			{
				for(t = 0; t < 30; t++)
					{
						track.name[t] = getc(fp);
					}
				for(t = 0; t < 30; t++)
					{
						track.artist[t] = getc(fp);
					}
				for(t = 0; t < 30; t++)
					{
						track.album[t] = getc(fp);
					}
				for(t = 0; t < 4; t++)
					{
						track.year[t] = getc(fp);
					}
				for(t = 0; t < 30; t++)
					{
						track.comment[t] = getc(fp);
					}
				
				fseek(fp, -1, SEEK_END);
				track.genre =  getc(fp);
				track.name[30] = '\0';
				track.artist[30] = '\0';
				track.album[30] = '\0';
				track.year[4] = '\0';
				track.comment[30] = '\0';
				track.genre =  '\0';
				printf("Track name: %s \n", track.name);
				printf("Artist: %s \n", track.artist);
				printf("Album: %s \n", track.album);
				printf("Year: %s \n", track.year);
				printf("Comment: %s \n", track.comment);
				printf("genre: %s \n", track.genre);
			}

		fclose(fp);
		getchar();
		return 0;
	}
