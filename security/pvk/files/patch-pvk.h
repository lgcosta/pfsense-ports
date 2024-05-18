--- pvk.h.orig	2001-04-10 12:00:08 UTC
+++ pvk.h
@@ -77,18 +77,18 @@ extern "C" {
 /* PVK file information */
 
 typedef struct {
-long magic;
-long res;
-long keytype;
-long crypt;
-long saltlen;
-long keylen;
+int32_t magic;
+int32_t res;
+int32_t keytype;
+int32_t crypt;
+int32_t saltlen;
+int32_t keylen;
 int encr;
 unsigned char *salt;
 unsigned char btype;
 unsigned char version;
 unsigned short reserved;
-unsigned long keyalg;
+uint32_t keyalg;
 unsigned char *key;
 } PVK_DAT;
 
@@ -116,7 +116,7 @@ RSA *pvk2rsa (PVK_DAT *pvk);
 int pvk_read(BIO *in, PVK_DAT *pvk);
 int pvk_write(BIO *out, PVK_DAT *pvk);
 int pvk_encrypt (PVK_DAT *pvk, char *pass, int encr);
-int rsa2pvk (RSA *rsa, PVK_DAT *pvk, unsigned long alg);
+int rsa2pvk (RSA *rsa, PVK_DAT *pvk, uint32_t alg);
 
 /* BEGIN ERROR CODES */
 /* The following lines are auto generated by the script mkerr.pl. Any changes