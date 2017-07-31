#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "noencrypt.h"

int
none_stream (buffer_t *chipertext, cipher_ctx_t *chiper_ctx, size_t capacity) {
    return CRYPTO_OK;
}

int
none_stream_all (buffer_t *plaintext, cipher_t *chiper, size_t capacity) {
    return CRYPTO_OK;
}

void
none_stream_ctx_init (chiper_t *chiper, cipher_ctx_t *chiper_ctx, int enc) {
    ;
}

void
plain_stream_ctx_release (cipher_ctx_t *chiper_ctx) {
    ;
}