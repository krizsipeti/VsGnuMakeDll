#ifndef EXPORTED_H
#define EXPORTED_H

#pragma once

typedef void (*fpSendNewLine) (char* pLine, void* pSlnMaker);

extern "C" int MakeMain(int argc, char **argv, fpSendNewLine funcPointer, void* pSlnMaker);

__declspec(dllexport) int ExecuteMakeCommand(int argc, char** argv, fpSendNewLine funcPointer, void* pSlnMaker);

#endif //EXPORTED_H
