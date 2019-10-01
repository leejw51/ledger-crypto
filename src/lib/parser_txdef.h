/*******************************************************************************
*  (c) 2019 ZondaX GmbH
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
********************************************************************************/
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stddef.h>

typedef struct {
    int16_t item_index;             // ??
    int16_t chunk_index;            // ??

    char *out_key;                  // ??
    int16_t out_key_len;            // ??
    char *out_val;                  // ??
    int16_t out_val_len;            // ??
} tx_query_t;

typedef struct {
    tx_query_t query;                       // ??
    int16_t item_index_current;                     // ??
    uint8_t max_level;
    uint8_t max_depth;
} tx_context_t;

typedef struct {
    parsed_json_t json;

    uint16_t max_chars_per_key_line;
    uint16_t max_chars_per_value_line;
    const char *tx;
    uint8_t cache_valid;

    tx_context_t tx_ctx;
} parser_tx_t;

#ifdef __cplusplus
}
#endif
