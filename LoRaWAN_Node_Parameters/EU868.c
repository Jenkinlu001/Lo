    "SX1301_conf": {
        "lorawan_public": true,
        "clksrc": 1, /* radio_1 provides clock to concentrator */
        "lbt_cfg": {
            "enable": false,
            "rssi_target": 160, /* rssi in dBm = -lbt_rssi_target/2 */
            "nb_channel": 1,
            "start_freq": 869525000,
            "scan_time_us": 5000,
            "tx_delay_1ch_us": 4000000,
            "tx_delay_2ch_us": 4000000
        },
        "antenna_gain": 0, /* antenna gain, in dBi */
        "radio_0": {
            "enable": true,
            "type": "SX1257",
            "freq": 867500000,
            "rssi_offset": -166.0,
            "tx_enable": true,
            "tx_notch_freq": 129000,
            "tx_freq_min": 863000000,
            "tx_freq_max": 870000000
        },
        "radio_1": {
            "enable": true,
            "type": "SX1257",
            "freq": 868500000,
            "rssi_offset": -166.0,
            "tx_enable": false
        },
        "chan_multiSF_0": {
            /* Lora MAC channel, 125kHz, all SF, 868.1 MHz */
            "enable": true,
            "radio": 1,
            "if": -400000
        },
        "chan_multiSF_1": {
            /* Lora MAC channel, 125kHz, all SF, 868.3 MHz */
            "enable": true,
            "radio": 1,
            "if": -200000
        },
        "chan_multiSF_2": {
            /* Lora MAC channel, 125kHz, all SF, 868.5 MHz */
            "enable": true,
            "radio": 1,
            "if": 0
        },
        "chan_multiSF_3": {
            /* Lora MAC channel, 125kHz, all SF, 867.1 MHz */
            "enable": true,
            "radio": 0,     /* 0, -400000 */
            "if": -400000
        },
        "chan_multiSF_4": {
            /* Lora MAC channel, 125kHz, all SF, 867.3 MHz */
            "enable": true,
            "radio": 0,     /* 0, -200000 */
            "if": -200000
        },
        "chan_multiSF_5": {
            /* Lora MAC channel, 125kHz, all SF, 867.5 MHz */
            "enable": true,
            "radio": 0,     /* 0, 0 */
            "if": 0
        },
        "chan_multiSF_6": {
            /* Lora MAC channel, 125kHz, all SF, 867.7 MHz */
            "enable": true,
            "radio": 0,
            "if": 200000
        },
        "chan_multiSF_7": {
            /* Lora MAC channel, 125kHz, all SF, 867.9 MHz */
            "enable": true,
            "radio": 0,
            "if": 400000
        },
        "chan_Lora_std": {
            /* Lora standard channel, 250kHz, SF7, 868.3 MHz */
            "enable": true,
            "radio": 1,
            "if": -200000,
            "bandwidth": 250000,
            "spread_factor": 7
        },
        "chan_FSK": {
            /* FSK 50kbps channel, 868.8 MHz */
            "enable": true,
            "radio": 1,
            "if": 300000,
            "bandwidth": 50000, /* 125000 */
            /*"freq_deviation": 25000,*/
            "datarate": 50000
        },
        "tx_lut_0": {
            /* TX gain table, index 0 */
            "pa_gain": 0,
            "mix_gain": 8,
            "rf_power": -6,
            "dig_gain": 0
        },
        "tx_lut_1": {
            /* TX gain table, index 1 */
            "pa_gain": 0,
            "mix_gain": 10,
            "rf_power": -3,
            "dig_gain": 0
        },
        "tx_lut_2": {
            /* TX gain table, index 2 */
            "pa_gain": 0,
            "mix_gain": 12,
            "rf_power": 0,
            "dig_gain": 0
        },
        "tx_lut_3": {
            /* TX gain table, index 3 */
            "pa_gain": 1,
            "mix_gain": 8,
            "rf_power": 3,
            "dig_gain": 0
        },
        "tx_lut_4": {
            /* TX gain table, index 4 */
            "pa_gain": 1,
            "mix_gain": 10,
            "rf_power": 6,
            "dig_gain": 0
        },
        "tx_lut_5": {
            /* TX gain table, index 5 */
            "pa_gain": 1,
            "mix_gain": 12,
            "rf_power": 10,
            "dig_gain": 0
        },
        "tx_lut_6": {
            /* TX gain table, index 6 */
            "pa_gain": 1,
            "mix_gain": 13,
            "rf_power": 11,
            "dig_gain": 0
        },
        "tx_lut_7": {
            /* TX gain table, index 7 */
            "pa_gain": 2,
            "mix_gain": 9,
            "rf_power": 12,
            "dig_gain": 0
        },
        "tx_lut_8": {
            /* TX gain table, index 8 */
            "pa_gain": 1,
            "mix_gain": 15,
            "rf_power": 13,
            "dig_gain": 0
        },
        "tx_lut_9": {
            /* TX gain table, index 9 */
            "pa_gain": 2,
            "mix_gain": 10,
            "rf_power": 14,
            "dig_gain": 0
        },
        "tx_lut_10": {
            /* TX gain table, index 10 */
            "pa_gain": 2,
            "mix_gain": 11,
            "rf_power": 16,
            "dig_gain": 0
        },
        "tx_lut_11": {
            /* TX gain table, index 11 */
            "pa_gain": 3,
            "mix_gain": 9,
            "rf_power": 20,
            "dig_gain": 0
        },
        "tx_lut_12": {
            /* TX gain table, index 12 */
            "pa_gain": 3,
            "mix_gain": 10,
            "rf_power": 23,
            "dig_gain": 0
        },
        "tx_lut_13": {
            /* TX gain table, index 13 */
            "pa_gain": 3,
            "mix_gain": 11,
            "rf_power": 25,
            "dig_gain": 0
        },
        "tx_lut_14": {
            /* TX gain table, index 14 */
            "pa_gain": 3,
            "mix_gain": 12,
            "rf_power": 26,
            "dig_gain": 0
        },
        "tx_lut_15": {
            /* TX gain table, index 15 */
            "pa_gain": 3,
            "mix_gain": 14,
            "rf_power": 27,
            "dig_gain": 0
        }
    },