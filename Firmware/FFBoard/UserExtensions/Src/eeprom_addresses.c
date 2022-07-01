/*
 * eeprom_addresses.c
 *
 *  Created on: 24.01.2020
 *      Author: Yannick
 */

#include "eeprom_addresses.h"

/*
Add all used addresses to the VirtAddVarTab[] array. This is important for the eeprom emulation to correctly transfer between pages.
This ensures that addresses that were once used are not copied again in a page transfer if they are not in this array.
*/

const uint16_t VirtAddVarTab[NB_OF_VAR] =
	{
		ADR_HW_VERSION, ADR_SW_VERSION,
		ADR_CURRENT_CONFIG,

		ADR_CANCONF1,ADR_I2CCONF1,

		ADR_FFBWHEEL_BUTTONCONF,ADR_FFBWHEEL_ANALOGCONF,ADR_FFBWHEEL_CONF1,

		ADR_LOCAL_BTN_CONF,ADR_LOCAL_BTN_CONF_2,
		ADR_PWM_MODE,
		ADR_LOCALANALOG_MASK,

		ADR_SHIFTERANALOG_X_12, ADR_SHIFTERANALOG_X_56,
		ADR_SHIFTERANALOG_Y_135, ADR_SHIFTERANALOG_Y_246,
		ADR_SHIFTERANALOG_CONF, ADR_SHIFTERANALOG_CONF_2, ADR_SHIFTERANALOG_CONF_3,

		ADR_SPI_BTN_1_CONF, ADR_SPI_BTN_1_CONF_2, 
		ADR_SPI_BTN_2_CONF, ADR_SPI_BTN_2_CONF_2,

		ADR_ENCLOCAL_CPR,

		ADR_CF_FILTER, ADR_AXIS_COUNT, ADR_AXIS_EFFECTS1, ADR_AXIS_EFFECTS2,

		ADR_AXIS1_CONFIG, ADR_AXIS1_POWER, ADR_AXIS1_DEGREES, ADR_AXIS1_ENDSTOP,ADR_AXIS1_EFFECTS1,ADR_AXIS1_ENC_RATIO,
		ADR_TMC1_MOTCONF, ADR_TMC1_CPR, ADR_TMC1_ENCA, ADR_TMC1_OFFSETFLUX, ADR_TMC1_TORQUE_P, ADR_TMC1_TORQUE_I, ADR_TMC1_FLUX_P, ADR_TMC1_FLUX_I,ADR_TMC1_ADC_I0_OFS,ADR_TMC1_ADC_I1_OFS,ADR_TMC1_ENC_OFFSET,ADR_TMC1_PHIE_OFS,

		ADR_AXIS2_CONFIG,ADR_AXIS2_POWER,ADR_AXIS2_DEGREES,ADR_AXIS2_ENDSTOP,ADR_AXIS2_EFFECTS1,ADR_AXIS2_ENC_RATIO,
		ADR_TMC2_MOTCONF,ADR_TMC2_CPR,ADR_TMC2_ENCA,ADR_TMC2_OFFSETFLUX,ADR_TMC2_TORQUE_P,ADR_TMC2_TORQUE_I,ADR_TMC2_FLUX_P,ADR_TMC2_FLUX_I,ADR_TMC2_ADC_I0_OFS,ADR_TMC2_ADC_I1_OFS,ADR_TMC2_ENC_OFFSET,ADR_TMC2_PHIE_OFS,

		ADR_AXIS3_CONFIG,ADR_AXIS3_POWER,ADR_AXIS3_DEGREES,ADR_AXIS3_ENDSTOP,ADR_AXIS3_EFFECTS1,ADR_AXIS3_ENC_RATIO,
		ADR_TMC3_MOTCONF,ADR_TMC3_CPR,ADR_TMC3_ENCA,ADR_TMC3_OFFSETFLUX,ADR_TMC3_TORQUE_P,ADR_TMC3_TORQUE_I,ADR_TMC3_FLUX_P,ADR_TMC3_FLUX_I,ADR_TMC3_ADC_I0_OFS,ADR_TMC3_ADC_I1_OFS,ADR_TMC3_ENC_OFFSET,ADR_TMC3_PHIE_OFS,
		ADR_ODRIVE_CANID,ADR_ODRIVE_SETTING1_M0,ADR_ODRIVE_SETTING1_M1,

		ADR_VESC1_CANID, ADR_VESC1_DATA, ADR_VESC1_OFFSET,
		ADR_VESC2_CANID, ADR_VESC2_DATA, ADR_VESC2_OFFSET,
		ADR_VESC3_CANID, ADR_VESC3_DATA, ADR_VESC3_OFFSET,

		ADR_MTENC_CONF1,ADR_MTENC_OFS,
		ADR_BISSENC_CONF1,ADR_BISSENC_OFS,

		ADR_PCFBTN_CONF1,
		ADR_CANBTN_CONF1,ADR_CANBTN_CONF2,
		ADR_CANANALOG_CONF1,
		ADR_ADS111X_CONF1,

		ADR_LOCALANALOG_MIN_0,ADR_LOCALANALOG_MAX_0,
		ADR_LOCALANALOG_MIN_1,ADR_LOCALANALOG_MAX_1,
		ADR_LOCALANALOG_MIN_2,ADR_LOCALANALOG_MAX_2,
		ADR_LOCALANALOG_MIN_3,ADR_LOCALANALOG_MAX_3,
		ADR_LOCALANALOG_MIN_4,ADR_LOCALANALOG_MAX_4,
		ADR_LOCALANALOG_MIN_5,ADR_LOCALANALOG_MAX_5,
		ADR_LOCALANALOG_MIN_6,ADR_LOCALANALOG_MAX_6,
		ADR_LOCALANALOG_MIN_7,ADR_LOCALANALOG_MAX_7,
		ADR_ADS111X_MIN_0,ADR_ADS111X_MAX_0,
		ADR_ADS111X_MIN_1,ADR_ADS111X_MAX_1,
		ADR_ADS111X_MIN_2,ADR_ADS111X_MAX_2,
		ADR_ADS111X_MIN_3,ADR_ADS111X_MAX_3,
	};


/**
 * Variables to be included in a flash dump
 */
const uint16_t exportableFlashAddresses[NB_EXPORTABLE_ADR] = {
		ADR_CURRENT_CONFIG,

		ADR_CANCONF1,ADR_I2CCONF1,

		ADR_FFBWHEEL_BUTTONCONF,ADR_FFBWHEEL_ANALOGCONF,ADR_FFBWHEEL_CONF1,

		ADR_LOCAL_BTN_CONF,ADR_LOCAL_BTN_CONF_2,
		ADR_PWM_MODE,
		ADR_LOCALANALOG_MASK,

		ADR_SHIFTERANALOG_X_12, ADR_SHIFTERANALOG_X_56,
		ADR_SHIFTERANALOG_Y_135, ADR_SHIFTERANALOG_Y_246,
		ADR_SHIFTERANALOG_CONF, ADR_SHIFTERANALOG_CONF_2, ADR_SHIFTERANALOG_CONF_3,

		ADR_SPI_BTN_1_CONF, ADR_SPI_BTN_1_CONF_2,
		ADR_SPI_BTN_2_CONF, ADR_SPI_BTN_2_CONF_2,

		ADR_ENCLOCAL_CPR,

		ADR_CF_FILTER, ADR_AXIS_COUNT, ADR_AXIS_EFFECTS1, ADR_AXIS_EFFECTS2,

		ADR_AXIS1_CONFIG, ADR_AXIS1_POWER, ADR_AXIS1_DEGREES, ADR_AXIS1_ENDSTOP,ADR_AXIS1_EFFECTS1,ADR_AXIS1_ENC_RATIO,
		ADR_TMC1_MOTCONF, ADR_TMC1_CPR, ADR_TMC1_ENCA, ADR_TMC1_OFFSETFLUX, ADR_TMC1_TORQUE_P, ADR_TMC1_TORQUE_I, ADR_TMC1_FLUX_P, ADR_TMC1_FLUX_I,

		ADR_AXIS2_CONFIG,ADR_AXIS2_POWER,ADR_AXIS2_DEGREES,ADR_AXIS2_ENDSTOP,ADR_AXIS2_EFFECTS1,ADR_AXIS2_ENC_RATIO,
		ADR_TMC2_MOTCONF,ADR_TMC2_CPR,ADR_TMC2_ENCA,ADR_TMC2_OFFSETFLUX,ADR_TMC2_TORQUE_P,ADR_TMC2_TORQUE_I,ADR_TMC2_FLUX_P,ADR_TMC2_FLUX_I,

		ADR_AXIS3_CONFIG,ADR_AXIS3_POWER,ADR_AXIS3_DEGREES,ADR_AXIS3_ENDSTOP,ADR_AXIS3_EFFECTS1,ADR_AXIS3_ENC_RATIO,
		ADR_TMC3_MOTCONF,ADR_TMC3_CPR,ADR_TMC3_ENCA,ADR_TMC3_OFFSETFLUX,ADR_TMC3_TORQUE_P,ADR_TMC3_TORQUE_I,ADR_TMC3_FLUX_P,ADR_TMC3_FLUX_I,
		ADR_ODRIVE_CANID,ADR_ODRIVE_SETTING1_M0,ADR_ODRIVE_SETTING1_M1,

		ADR_VESC1_CANID, ADR_VESC1_DATA, ADR_VESC1_OFFSET,
		ADR_VESC2_CANID, ADR_VESC2_DATA, ADR_VESC2_OFFSET,
		ADR_VESC3_CANID, ADR_VESC3_DATA, ADR_VESC3_OFFSET,

		ADR_MTENC_CONF1,ADR_MTENC_OFS,
		ADR_BISSENC_CONF1,ADR_BISSENC_OFS,

		ADR_PCFBTN_CONF1,
		ADR_CANBTN_CONF1,ADR_CANBTN_CONF2,
		ADR_CANANALOG_CONF1,
		ADR_ADS111X_CONF1,

		ADR_LOCALANALOG_MIN_0,ADR_LOCALANALOG_MAX_0,
		ADR_LOCALANALOG_MIN_1,ADR_LOCALANALOG_MAX_1,
		ADR_LOCALANALOG_MIN_2,ADR_LOCALANALOG_MAX_2,
		ADR_LOCALANALOG_MIN_3,ADR_LOCALANALOG_MAX_3,
		ADR_LOCALANALOG_MIN_4,ADR_LOCALANALOG_MAX_4,
		ADR_LOCALANALOG_MIN_5,ADR_LOCALANALOG_MAX_5,
		ADR_LOCALANALOG_MIN_6,ADR_LOCALANALOG_MAX_6,
		ADR_LOCALANALOG_MIN_7,ADR_LOCALANALOG_MAX_7,
		ADR_ADS111X_MIN_0,ADR_ADS111X_MAX_0,
		ADR_ADS111X_MIN_1,ADR_ADS111X_MAX_1,
		ADR_ADS111X_MIN_2,ADR_ADS111X_MAX_2,
		ADR_ADS111X_MIN_3,ADR_ADS111X_MAX_3,
};
