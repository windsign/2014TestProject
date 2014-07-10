#include "textfile.h"

char *textFileRead(const char *fn)
{
	if(fn == 0){
		return 0;
	}
	FILE* fp;
	char* comment = 0;
	fp = fopen(fn, "r");
	if(fp != 0){
		fseek(fp, 0, SEEK_END);
		int count = ftell(fp);
		rewind(fp);
		comment = (char*)malloc(count+1);
		count = fread(comment, 1, count, fp);
		comment[count]='\0';
	}
	fclose(fp);
	return comment;		
}

void textFileWrite(const char *fn, const char* s)
{

}