#include "mgos_arduino_lora.h"

LoRa* mgos_LoRa_create()
{
	return new LoRa();
}
int mgos_lora_begin(LoRa* lora,long int  frequency)
{
	if (lora == nullptr)
        return false;
    return LoRa->begin(frequency);
}

/*void mgos_lora_end(LoRa* lora)
{
	if (lora == nullptr)
        return false;
    return LoRa->end();
}

int mgos_lora_beginpacket(LoRa* lora, int implicitHeader)
{
	if (lora == nullptr)
        return false;
    return LoRa->beginPacket(implicitHeader);
}

int mgos_lora_endpacket(LoRa* lora)
{
	
	if (lora == nullptr)
        return false;
    return LoRa->endPacket();
}

int mgos_lora_parsepacket(LoRa* lora, int size)
{
	if (lora == nullptr)
        return false;
    return LoRa->parsePacket(size);
}

int mgos_lora_rssi(LoRa* lora)
{
    if (lora == nullptr)
        return false;
    return LoRa->packetRssi();
}

float mgos_lora_packetsnr(LoRa* lora)
{
	if (lora == nullptr)
        return false;
    return LoRa->packetSnr();
}

long mgos_lora_packet_frequencyerror(LoRa* lora)
{
	if (lora == nullptr)
        return false;
    return LoRa->packetFrequencyError();
}

size_t mgos_lora_write(LoRa* lora, uint8_t byte)
{
	if (lora == nullptr)
        return false;
    return LoRa->write(byte);	
}

size_t mgos_lora_write(LoRa* lora, const uint8_t *buffer, size_t size)
{
	if (lora == nullptr)
        return false;
    return LoRa->write(buffer,size);
}

int mgos_lora_available(LoRa* lora)
{
	if (lora == nullptr)
        return false;
    return LoRa->available();
}*/

int mgos_lora_read(LoRa* lora)
{
	if (lora == nullptr)
        return false;
    return LoRa->read();
}


		






















































	
