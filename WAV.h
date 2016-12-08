#ifndef WAV
#define WAV

using namespace std;

class WAV
{
	public:
		float* readWAV(char* fName, float *signal, int *size_r);
		void writeWAV(char* fName, int numSamples, float *size_w);

		char *format;
		int chunkSize;
		char *chunkID;
		char *subChunk1ID;
		int16_t blockAlign;
		int16_t bitsPerSample;
		int16_t audioFormat;
		int sampleRate;
		char *subChunk2ID;
		int dataSize;
		short* fileData;
		int sucChunk1Size;
		int byteRate;
};

#endif
