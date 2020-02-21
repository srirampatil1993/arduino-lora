#ifndef _MGOS_ARDUINO_LORA1276_H_
#define _MGOS_ARDUINO_LORA1276_H_
#endif
#include"LoRa.h"
#ifdef __cplusplus
extern "C"
{
#endif

LoRa* mgos_LoRa_create();
int mgos_lora_begin(LoRa* lora,long int frequency);
/*void mgos_lora_end(LoRa* lora);
int mgos_lora_beginpacket(LoRa* lora, int implicitHeader);
int mgos_lora_endpacket(LoRa* lora);
int mgos_lora_parsepacket(LoRa* lora, int size);
int mgos_lora_rssi(LoRa* lora);
float mgos_lora_packetsnr(LoRa* lora);
long mgos_lora_packet_frequencyerror(LoRa* lora);
size_t mgos_lora_write(LoRa* lora, uint8_t byte);
size_t mgos_lora_write(LoRa* lora, const uint8_t *buffer, size_t size);
int mgos_lora_available(LoRa* lora);*/
int mgos_lora_read(LoRa* lora);
#ifdef __cplusplus
}
#endif /* __cplusplus */
