#include "exported.h"
#include "make.h"


//----------------------------------------------------------------------------
// Function ExecuteMakeCommand
//----------------------------------------------------------------------------
// Description  : 
// Input        : argc        : 
// Input        : funcPointer : 
// Input/Output : argv        : 
// Input/Output : pSlnMaker   : 
// Return value : 
//----------------------------------------------------------------------------
int ExecuteMakeCommand(int argc, char** argv, fpSendNewLine funcPointer, void* pSlnMaker)
{
    return MakeMain(argc, argv, funcPointer, pSlnMaker);
}
