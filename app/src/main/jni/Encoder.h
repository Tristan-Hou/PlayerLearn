
#include <stdio.h>
#include <libmp3lame/lame.h>

#ifndef PLAYERLEARN_ENCODER_H
#define PLAYERLEARN_ENCODER_H

#endif //PLAYERLEARN_ENCODER_H

class Encoder {
private:
    FILE* pcmFile;
    FILE* mp3File;
    lame_t lameClient;

public:
    Encoder();
    ~Encoder();
    int init(const char* pcmFilePath, const char *mp3FilePath, int sampleRate, int channels, int bitRate);
    void Encode();
    void Destory();
};
