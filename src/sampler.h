void sampler_zq(mpz_t random);
void sampler_zq_list(mpz_t * random, size_t l);
void fmpz_sampler_zq_B(fmpz_t random, unsigned char * buffer,size_t bufferLength, size_t *bufferPosition,unsigned char * seed, unsigned char *counter);
void fmpz_sampler_zq_poly_FFT(fmpz_mod_poly_t * random);
void fmpz_sampler_zq(fmpz_t random);
void samplerAuxiliaryParameters(int *bQ, int *BQ, unsigned char *auxSampler);
void refreshBuffer(unsigned char * buffer, size_t bufferLength, unsigned char * seed, unsigned char *counter);
unsigned int randUnsignedIntB(int a, int b, unsigned char * buffer, size_t bufferLength, size_t *bufferPosition, unsigned char * seed, unsigned char *counter);
unsigned int randUnsignedInt(int a, int b);
void sampler_mpz(mpz_t random, mpz_t module);
