/******************************************************************************
 *
 *  Copyright 2023 NXP
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 ******************************************************************************/

#ifndef MAP_H
#define MAP_H
/** \addtogroup EMVCO_STACK_UTILITY_API_INTERFACE
 *  @brief interface to read configuration values on stored on config file. Also
 * provides Interface for getting the chip type, linked list and Semphore
 * implementation.
 *  @{
 */
#include <stdbool.h>
struct map_node {
  void *key;
  void *value;
  int key_size;
  int value_size;
  struct map_node *next;
};

struct map {
  struct map_node *head;
  int size;
};

bool string_val;

/**
 * @brief Sets the value of string_val
 *
 * @param value The value to be set for string_val
 */
void set_string_val(bool);

/**
 * @brief Returns the current value of string_val
 *
 * @return The current value of string_val
 */
bool is_string_val();

/**
 * @brief Creates a new map and returns a pointer to it.
 * @return A pointer to the newly created map.
 */
struct map *map_create(void);
/**
 * @brief Sets a key-value pair in the map.
 * If the key already exists, its value will be updated.
 * @param m The map to set the key-value pair in.
 * @param key The key.
 * @param key_size The size of the key.
 * @param value The value.
 * @param value_size The size of the value.
 */
void map_set(struct map *m, const void *key, int key_size, const void *value,
             int value_size);
/**
 * @brief Gets the value associated with a key from the map.
 * @param m The map to retrieve the value from.
 * @param key The key.
 * @param key_size The size of the key.
 * @param value_size A pointer to the location where the size of the value
 * should be stored.
 * @return The value associated with the key.
 */
void *map_get_value(const struct map *m, const void *key, int key_size,
                    unsigned int *value_size);

/** @}*/
#endif /* MAP_H */
