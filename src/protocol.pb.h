/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.4 at Wed Dec 11 00:18:40 2019. */

#ifndef PB_PROTOCOL_PB_H_INCLUDED
#define PB_PROTOCOL_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _SimpleMessage {
    int32_t id;
    int32_t num;
    char str[100];
    int32_t num2;
    int32_t num3_add;
/* @@protoc_insertion_point(struct:SimpleMessage) */
} SimpleMessage;

/* Default values for struct fields */

/* Initializer values for message structs */
#define SimpleMessage_init_default               {0, 0, "", 0, 0}
#define SimpleMessage_init_zero                  {0, 0, "", 0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define SimpleMessage_id_tag                     1
#define SimpleMessage_num_tag                    2
#define SimpleMessage_str_tag                    3
#define SimpleMessage_num2_tag                   4
#define SimpleMessage_num3_add_tag               5

/* Struct field encoding specification for nanopb */
extern const pb_field_t SimpleMessage_fields[6];

/* Maximum encoded size of messages (where known) */
#define SimpleMessage_size                       146

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define PROTOCOL_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif