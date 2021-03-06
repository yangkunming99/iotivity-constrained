/*
// Copyright (c) 2018 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
*/

#ifndef OC_SESSION_EVENTS_H
#define OC_SESSION_EVENTS_H

#include "oc_endpoint.h"
#include "oc_session_state.h"
#include "port/oc_network_events_mutex.h"
#include "util/oc_process.h"

OC_PROCESS_NAME(oc_session_events);

void oc_session_start_event(oc_endpoint_t *endpoint);
void oc_session_end_event(oc_endpoint_t *endpoint);
void oc_handle_session(oc_endpoint_t *endpoint, oc_session_state_t state);

#endif /* OC_SESSION_EVENTS_H */
