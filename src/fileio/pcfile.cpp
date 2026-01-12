/***********************************/
/*** PSX PC BigLump FileIO Stuff ***/
/***********************************/

#include 	"system/global.h"
#include	"fileio/fileio.h"
#include 	"fileio/pcfile.h"

/*****************************************************************************/
CPCFileIO::CPCFileIO(char *Filename,sBigLump *BigLumpPtr)
{
int		NoPath=0;
		sprintf(FullFilename,"assets/%s",Filename);
		BigLump=BigLumpPtr;
		FileHandle=NULL;
}

/*****************************************************************************/
void 	CPCFileIO::Open()
{
		FileHandle=fopen(FullFilename, "rb");
		ASSERT(FileHandle != NULL);
}

/*****************************************************************************/
void 	CPCFileIO::Read(u32 Count,void *Dst)
{
		fseek(FileHandle,BigLump->Sector*FILEIO_CHUNKSIZE,SEEK_SET);
		fread((char*)Dst,Count*FILEIO_CHUNKSIZE,1,FileHandle);
		BigLump->Sector+=Count;
}

/*****************************************************************************/
void 	CPCFileIO::Close()
{
		if (FileHandle!=NULL) fclose(FileHandle);
		FileHandle=NULL;

}
