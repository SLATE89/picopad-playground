#include "picopad.h"

// sound format: PCM mono 8-bit 22050Hz
const u8 ServeSnd[1810] = {
	0x84, 0x82, 0x79, 0x72, 0x72, 0x77, 0x7C, 0x7F, 0x82, 0x86, 0x86, 0x85, 0x86, 0x8B, 0x8A, 0x77, 
	0x57, 0x3A, 0x2F, 0x36, 0x44, 0x50, 0x57, 0x5E, 0x64, 0x63, 0x5E, 0x60, 0x75, 0x98, 0xB5, 0xBC, 
	0xB6, 0xB0, 0xB0, 0xB0, 0xB2, 0xBE, 0xD7, 0xF1, 0xF9, 0xEF, 0xDC, 0xCD, 0xC3, 0xBC, 0xB5, 0xB3, 
	0xB5, 0xB1, 0x9C, 0x78, 0x58, 0x4F, 0x57, 0x5E, 0x59, 0x4E, 0x43, 0x36, 0x24, 0x10, 0x0A, 0x13, 
	0x25, 0x34, 0x3D, 0x43, 0x48, 0x4A, 0x49, 0x4D, 0x60, 0x83, 0xA2, 0xAB, 0x9F, 0x96, 0xA1, 0xB8, 
	0xCA, 0xD6, 0xE0, 0xEA, 0xED, 0xE3, 0xD3, 0xC5, 0xBC, 0xB7, 0xB3, 0xAF, 0xAF, 0xAC, 0x9B, 0x77, 
	0x55, 0x4B, 0x5A, 0x66, 0x59, 0x38, 0x1E, 0x13, 0x11, 0x0F, 0x0F, 0x17, 0x27, 0x37, 0x41, 0x44, 
	0x47, 0x4D, 0x53, 0x56, 0x5C, 0x6E, 0x89, 0x9C, 0x9C, 0x99, 0xA8, 0xCC, 0xEE, 0xFC, 0xF8, 0xF0, 
	0xEA, 0xE3, 0xD7, 0xC8, 0xBD, 0xB7, 0xB4, 0xB0, 0xAB, 0xA6, 0x9E, 0x8D, 0x75, 0x65, 0x65, 0x66, 
	0x55, 0x31, 0x0E, 0x03, 0x04, 0x0E, 0x16, 0x1E, 0x2A, 0x38, 0x43, 0x49, 0x4C, 0x50, 0x55, 0x5B, 
	0x63, 0x73, 0x89, 0x99, 0x99, 0x98, 0xA8, 0xCD, 0xF1, 0xFE, 0xFB, 0xEF, 0xE6, 0xDF, 0xD4, 0xC6, 
	0xBB, 0xB5, 0xB3, 0xB0, 0xAA, 0xA4, 0x9C, 0x8C, 0x76, 0x67, 0x67, 0x69, 0x59, 0x33, 0x0E, 0x03, 
	0x06, 0x14, 0x1C, 0x22, 0x2C, 0x3A, 0x47, 0x4D, 0x4C, 0x4F, 0x58, 0x65, 0x71, 0x7F, 0x90, 0x9A, 
	0x99, 0x97, 0xA7, 0xCC, 0xF2, 0xFE, 0xF9, 0xE9, 0xE0, 0xDB, 0xD3, 0xC5, 0xB8, 0xB3, 0xB5, 0xB4, 
	0xA6, 0x8D, 0x77, 0x69, 0x62, 0x63, 0x69, 0x6A, 0x59, 0x34, 0x0F, 0x03, 0x06, 0x16, 0x21, 0x27, 
	0x2E, 0x39, 0x42, 0x45, 0x43, 0x48, 0x5D, 0x7F, 0x9D, 0xAB, 0xAA, 0xA1, 0x96, 0x94, 0xA6, 0xCC, 
	0xF1, 0xFE, 0xF7, 0xE8, 0xDD, 0xD7, 0xD0, 0xC5, 0xBC, 0xBA, 0xBC, 0xB8, 0xA2, 0x7F, 0x60, 0x52, 
	0x55, 0x60, 0x6C, 0x6E, 0x5B, 0x35, 0x10, 0x03, 0x09, 0x19, 0x24, 0x2A, 0x31, 0x3C, 0x45, 0x48, 
	0x47, 0x4C, 0x61, 0x82, 0x9F, 0xAC, 0xAA, 0x9F, 0x94, 0x91, 0xA3, 0xC9, 0xF0, 0xFE, 0xF5, 0xE3, 
	0xD9, 0xD4, 0xCD, 0xC2, 0xB8, 0xB5, 0xB8, 0xB5, 0xA0, 0x7F, 0x60, 0x53, 0x57, 0x61, 0x6C, 0x6E, 
	0x5E, 0x39, 0x11, 0x03, 0x0B, 0x1F, 0x29, 0x2A, 0x31, 0x3E, 0x4B, 0x4E, 0x4A, 0x4C, 0x60, 0x83, 
	0xA1, 0xAA, 0xA2, 0x9B, 0x99, 0x98, 0x98, 0xA6, 0xC8, 0xEB, 0xFA, 0xF1, 0xDE, 0xD0, 0xC8, 0xC1, 
	0xB9, 0xB4, 0xB4, 0xB2, 0xA1, 0x81, 0x63, 0x58, 0x5E, 0x68, 0x6B, 0x6B, 0x67, 0x58, 0x39, 0x17, 
	0x06, 0x0D, 0x20, 0x30, 0x39, 0x3F, 0x46, 0x4B, 0x4C, 0x50, 0x60, 0x7E, 0x9B, 0xA7, 0xA2, 0x98, 
	0x94, 0x95, 0x9A, 0xA9, 0xC5, 0xE5, 0xF7, 0xF3, 0xE1, 0xCF, 0xC4, 0xBE, 0xB9, 0xB4, 0xB3, 0xB0, 
	0xA2, 0x85, 0x68, 0x5A, 0x5F, 0x69, 0x6E, 0x6C, 0x65, 0x55, 0x3A, 0x1C, 0x0B, 0x0F, 0x20, 0x32, 
	0x3C, 0x41, 0x45, 0x4A, 0x4F, 0x54, 0x62, 0x7D, 0x99, 0xA7, 0xA1, 0x95, 0x90, 0x93, 0x9A, 0xA9, 
	0xC2, 0xE1, 0xF2, 0xEE, 0xDB, 0xC8, 0xBE, 0xBD, 0xBB, 0xB3, 0xA9, 0xA4, 0xA0, 0x96, 0x80, 0x6A, 
	0x60, 0x64, 0x6C, 0x6F, 0x6A, 0x58, 0x3C, 0x1E, 0x0F, 0x14, 0x27, 0x3A, 0x43, 0x46, 0x49, 0x52, 
	0x5B, 0x61, 0x63, 0x6C, 0x80, 0x96, 0xA1, 0x9E, 0x95, 0x91, 0x97, 0xA7, 0xC2, 0xDC, 0xEB, 0xE6, 
	0xD4, 0xC1, 0xB8, 0xB5, 0xB3, 0xAC, 0xA2, 0x9A, 0x95, 0x8C, 0x7A, 0x67, 0x5E, 0x62, 0x6B, 0x6E, 
	0x68, 0x57, 0x3E, 0x26, 0x1A, 0x20, 0x34, 0x47, 0x51, 0x53, 0x53, 0x5A, 0x67, 0x74, 0x7D, 0x86, 
	0x93, 0xA1, 0xA7, 0xA2, 0x99, 0x96, 0x9B, 0xA6, 0xB4, 0xC3, 0xCB, 0xC7, 0xBA, 0xAA, 0xA1, 0xA1, 
	0xA4, 0xA0, 0x90, 0x7C, 0x6C, 0x64, 0x5F, 0x5A, 0x5A, 0x5F, 0x66, 0x68, 0x65, 0x5E, 0x55, 0x4D, 
	0x48, 0x4B, 0x56, 0x62, 0x6A, 0x6A, 0x66, 0x69, 0x79, 0x91, 0xA5, 0xAC, 0xAD, 0xAC, 0xA9, 0xA3, 
	0x9B, 0x96, 0x96, 0x99, 0x9E, 0xA3, 0xA6, 0xA5, 0x9F, 0x99, 0x95, 0x97, 0x9A, 0x96, 0x86, 0x6F, 
	0x5C, 0x55, 0x55, 0x57, 0x5A, 0x60, 0x67, 0x6A, 0x69, 0x66, 0x64, 0x62, 0x61, 0x61, 0x65, 0x6B, 
	0x6E, 0x6E, 0x6B, 0x6D, 0x7A, 0x8F, 0xA1, 0xA8, 0xA8, 0xA6, 0xA3, 0x9E, 0x98, 0x96, 0x97, 0x98, 
	0x98, 0x98, 0x99, 0x9A, 0x98, 0x93, 0x90, 0x90, 0x92, 0x90, 0x85, 0x71, 0x60, 0x58, 0x59, 0x5C, 
	0x5F, 0x63, 0x68, 0x6A, 0x69, 0x69, 0x69, 0x6B, 0x6C, 0x6D, 0x6F, 0x72, 0x75, 0x75, 0x73, 0x73, 
	0x7D, 0x8D, 0x9C, 0xA3, 0xA2, 0x9F, 0x9C, 0x98, 0x95, 0x94, 0x95, 0x97, 0x96, 0x95, 0x94, 0x94, 
	0x92, 0x8F, 0x8D, 0x8D, 0x8F, 0x8E, 0x84, 0x74, 0x65, 0x5F, 0x5F, 0x62, 0x64, 0x66, 0x69, 0x6A, 
	0x69, 0x66, 0x66, 0x68, 0x6B, 0x6C, 0x6D, 0x70, 0x72, 0x73, 0x72, 0x72, 0x7A, 0x88, 0x97, 0x9E, 
	0x9D, 0x9A, 0x99, 0x97, 0x95, 0x94, 0x95, 0x97, 0x98, 0x96, 0x93, 0x92, 0x91, 0x8F, 0x8C, 0x8A, 
	0x8B, 0x8B, 0x86, 0x79, 0x6B, 0x64, 0x65, 0x68, 0x6A, 0x6A, 0x6B, 0x6C, 0x6C, 0x6B, 0x6B, 0x6D, 
	0x6F, 0x71, 0x73, 0x74, 0x76, 0x78, 0x78, 0x78, 0x7C, 0x87, 0x93, 0x9A, 0x99, 0x96, 0x96, 0x97, 
	0x96, 0x95, 0x94, 0x95, 0x94, 0x92, 0x8F, 0x8E, 0x8D, 0x8C, 0x8B, 0x89, 0x89, 0x88, 0x84, 0x7A, 
	0x6E, 0x68, 0x69, 0x6C, 0x6D, 0x6B, 0x6A, 0x6B, 0x6B, 0x6B, 0x6B, 0x6D, 0x70, 0x73, 0x74, 0x74, 
	0x75, 0x77, 0x78, 0x78, 0x7B, 0x84, 0x8F, 0x95, 0x94, 0x90, 0x8F, 0x92, 0x93, 0x93, 0x92, 0x92, 
	0x93, 0x92, 0x8F, 0x8B, 0x89, 0x89, 0x8A, 0x89, 0x86, 0x84, 0x84, 0x81, 0x79, 0x71, 0x6D, 0x6E, 
	0x6F, 0x6F, 0x6D, 0x6D, 0x6D, 0x6D, 0x6E, 0x6F, 0x72, 0x75, 0x78, 0x78, 0x76, 0x77, 0x7A, 0x7F, 
	0x82, 0x85, 0x8A, 0x8F, 0x92, 0x91, 0x90, 0x90, 0x92, 0x92, 0x92, 0x92, 0x91, 0x90, 0x8D, 0x8A, 
	0x87, 0x88, 0x8B, 0x8B, 0x86, 0x7E, 0x77, 0x74, 0x72, 0x70, 0x70, 0x72, 0x73, 0x72, 0x71, 0x6F, 
	0x6F, 0x6F, 0x70, 0x71, 0x74, 0x77, 0x79, 0x78, 0x76, 0x76, 0x7B, 0x84, 0x8C, 0x8F, 0x8F, 0x8E, 
	0x8E, 0x8D, 0x8C, 0x8D, 0x90, 0x91, 0x92, 0x91, 0x90, 0x8E, 0x8B, 0x88, 0x87, 0x87, 0x89, 0x89, 
	0x84, 0x7B, 0x74, 0x70, 0x70, 0x72, 0x73, 0x74, 0x74, 0x73, 0x70, 0x6E, 0x6E, 0x6F, 0x70, 0x73, 
	0x76, 0x78, 0x7A, 0x79, 0x78, 0x78, 0x7D, 0x85, 0x8D, 0x90, 0x8F, 0x8D, 0x8B, 0x8A, 0x8A, 0x8C, 
	0x8F, 0x91, 0x91, 0x91, 0x8F, 0x8C, 0x89, 0x86, 0x85, 0x86, 0x87, 0x86, 0x82, 0x7B, 0x74, 0x71, 
	0x72, 0x74, 0x75, 0x76, 0x76, 0x75, 0x73, 0x71, 0x70, 0x70, 0x72, 0x75, 0x78, 0x7A, 0x7B, 0x7B, 
	0x79, 0x79, 0x7D, 0x84, 0x8B, 0x8D, 0x8D, 0x8B, 0x8A, 0x8A, 0x89, 0x8A, 0x8C, 0x8E, 0x8F, 0x8E, 
	0x8D, 0x8B, 0x88, 0x86, 0x85, 0x85, 0x86, 0x86, 0x83, 0x7D, 0x77, 0x74, 0x75, 0x76, 0x77, 0x77, 
	0x78, 0x77, 0x76, 0x74, 0x73, 0x73, 0x74, 0x76, 0x78, 0x7A, 0x7B, 0x7B, 0x7A, 0x7A, 0x7C, 0x80, 
	0x86, 0x89, 0x89, 0x88, 0x88, 0x87, 0x86, 0x85, 0x86, 0x87, 0x89, 0x8A, 0x8A, 0x8A, 0x89, 0x87, 
	0x86, 0x85, 0x86, 0x87, 0x85, 0x81, 0x7B, 0x78, 0x78, 0x79, 0x79, 0x79, 0x7A, 0x7B, 0x7B, 0x7A, 
	0x79, 0x77, 0x76, 0x76, 0x77, 0x78, 0x79, 0x7A, 0x7A, 0x79, 0x7A, 0x7E, 0x83, 0x86, 0x86, 0x86, 
	0x85, 0x86, 0x85, 0x84, 0x84, 0x85, 0x87, 0x89, 0x8A, 0x89, 0x88, 0x87, 0x87, 0x87, 0x87, 0x87, 
	0x86, 0x83, 0x7E, 0x7B, 0x7B, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7B, 0x79, 0x77, 0x76, 0x77, 
	0x79, 0x7A, 0x79, 0x78, 0x78, 0x78, 0x7A, 0x7E, 0x82, 0x84, 0x84, 0x83, 0x83, 0x84, 0x84, 0x84, 
	0x84, 0x85, 0x87, 0x8A, 0x8A, 0x88, 0x86, 0x85, 0x86, 0x87, 0x87, 0x86, 0x84, 0x82, 0x7F, 0x7D, 
	0x7D, 0x7D, 0x7D, 0x7C, 0x7C, 0x7C, 0x7C, 0x7B, 0x79, 0x77, 0x77, 0x79, 0x7B, 0x7C, 0x7A, 0x79, 
	0x7A, 0x7C, 0x7E, 0x7F, 0x80, 0x82, 0x82, 0x82, 0x82, 0x83, 0x83, 0x83, 0x83, 0x83, 0x85, 0x87, 
	0x87, 0x86, 0x85, 0x84, 0x86, 0x87, 0x86, 0x83, 0x80, 0x7E, 0x7E, 0x7D, 0x7D, 0x7E, 0x7E, 0x7D, 
	0x7D, 0x7C, 0x7C, 0x7C, 0x7C, 0x7B, 0x7A, 0x7B, 0x7D, 0x7D, 0x7C, 0x7B, 0x7C, 0x80, 0x82, 0x84, 
	0x84, 0x83, 0x83, 0x82, 0x82, 0x83, 0x83, 0x83, 0x83, 0x82, 0x83, 0x84, 0x84, 0x84, 0x83, 0x82, 
	0x83, 0x84, 0x82, 0x7F, 0x7C, 0x7B, 0x7B, 0x7C, 0x7D, 0x7E, 0x7E, 0x7D, 0x7D, 0x7C, 0x7D, 0x7D, 
	0x7D, 0x7D, 0x7C, 0x7D, 0x7E, 0x7E, 0x7E, 0x7D, 0x7F, 0x81, 0x84, 0x85, 0x85, 0x84, 0x83, 0x83, 
	0x82, 0x83, 0x83, 0x84, 0x83, 0x82, 0x82, 0x82, 0x83, 0x82, 0x81, 0x81, 0x81, 0x81, 0x81, 0x7E, 
	0x7C, 0x7B, 0x7B, 0x7C, 0x7D, 0x7D, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 
	0x7E, 0x7F, 0x7F, 0x7F, 0x80, 0x82, 0x84, 0x84, 0x84, 0x83, 0x82, 0x82, 0x82, 0x82, 0x82, 0x81, 
	0x81, 0x81, 0x81, 0x81, 0x82, 0x82, 0x81, 0x81, 0x80, 0x80, 0x80, 0x7E, 0x7D, 0x7C, 0x7C, 0x7D, 
	0x7D, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 
	0x80, 0x82, 0x83, 0x83, 0x83, 0x83, 0x83, 0x82, 0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x7F, 0x7E, 0x7C, 0x7C, 0x7C, 0x7D, 0x7D, 0x7E, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x81, 0x81, 0x82, 0x83, 0x84, 
	0x83, 0x83, 0x82, 0x81, 0x81, 0x80, 0x80, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x7F, 0x7F, 0x7F, 0x7E, 0x7D, 0x7D, 0x7D, 0x7E, 0x7E, 0x7F, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 0x82, 0x82, 0x83, 0x82, 0x82, 0x81, 0x80, 
	0x80, 0x80, 0x80, 0x81, 0x81, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 
	0x7E, 0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 
	0x7F, 0x7F, 0x80, 0x80, 0x81, 0x81, 0x81, 0x82, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7E, 0x7E, 0x7E, 0x7F, 
	0x7F, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 
	0x81, 0x82, 0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x81, 0x81, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 
	0x81, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 
};
