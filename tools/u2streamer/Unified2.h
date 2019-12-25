
#ifndef __UNIFIED2_H__
#define __UNIFIED2_H__

#include <sys/types.h>
#ifdef LINUX
#include <stdint.h>
#endif


#include "Unified2_common.h"

/*! \defgroup Unified2
 */
/** \addtogroup Unified2 */
/*@{*/

#define UNIFIED2_CLASSIFICATION        3
#define UNIFIED2_PRIORITY              4
#define UNIFIED2_SIGNATURE_MESSAGE     5

#define UNIFIED2_RNA_EVENT             6
#define UNIFIED2_POLICY_EVENT          8
#define UNIFIED2_IMPACT_ALERT          9
#define UNIFIED2_RNA_EVENT_NEW_HOST    10
#define UNIFIED2_RNA_EVENT_NEW_TCP_SERVICE  11
#define UNIFIED2_RNA_EVENT_NEW_UDP_SERVICE  12
#define UNIFIED2_RNA_EVENT_NEW_NET_PROTOCOL 13
#define UNIFIED2_RNA_EVENT_NEW_XPORT_PROTOCOL   14
#define UNIFIED2_RNA_EVENT_NEW_CLIENT_APP       15
#define UNIFIED2_RNA_EVENT_CHANGE_TCP_SERVICE_INFO  16
#define UNIFIED2_RNA_EVENT_CHANGE_UDP_SERVICE_INFO  17
#define UNIFIED2_RNA_EVENT_CHANGE_OS                18
#define UNIFIED2_RNA_EVENT_CHANGE_HT_TIMEOUT        19
#define UNIFIED2_RNA_EVENT_CHANGE_HT_REMOVE         20
#define UNIFIED2_RNA_EVENT_CHANGE_HT_ANR_DELETE     21
#define UNIFIED2_RNA_EVENT_CHANGE_HOPS              22
#define UNIFIED2_RNA_EVENT_CHANGE_TCP_PORT_CLOSED   23
#define UNIFIED2_RNA_EVENT_CHANGE_UDP_PORT_CLOSED   24
#define UNIFIED2_RNA_EVENT_CHANGE_TCP_PORT_TIMEOUT  25
#define UNIFIED2_RNA_EVENT_CHANGE_UDP_PORT_TIMEOUT  26
#define UNIFIED2_RNA_EVENT_CHANGE_MAC_INFO          27
#define UNIFIED2_RNA_EVENT_CHANGE_MAC_ADD           28
#define UNIFIED2_RNA_EVENT_CHANGE_HOST_IP           29
#define UNIFIED2_RNA_EVENT_CHANGE_HOST_UPDATE       30
#define UNIFIED2_RNA_EVENT_CHANGE_HOST_TYPE         31
#define UNIFIED2_RNA_EVENT_CHANGE_VULN_MAP          32
#define UNIFIED2_RNA_EVENT_CHANGE_FLOW_STATS        33
#define UNIFIED2_RNA_EVENT_CHANGE_VLAN_TAG          34
#define UNIFIED2_RNA_EVENT_CHANGE_CLIENT_APP_TIMEOUT    35
#define UNIFIED2_POLICY_EVENT_V2                    36
#define UNIFIED2_RNA_EVENT_USER_VULN_VALID          37
#define UNIFIED2_RNA_EVENT_USER_VULN_INVALID        38
#define UNIFIED2_RNA_EVENT_USER_DELETE_ADDR         39
#define UNIFIED2_RNA_EVENT_USER_DELETE_SERVICE      40
#define UNIFIED2_RNA_EVENT_USER_SET_CRIICALITY      41
#define UNIFIED2_RNA_EVENT_CHANGE_NETBIOS_NAME      42
#define UNIFIED2_RNA_EVENT_CHANGE_HT_DROPPED        44
#define UNIFIED2_RNA_EVENT_CHANGE_BANNER_UPDATE     45
#define UNIFIED2_RNA_EVENT_USER_ADD_ATTRIBUTE       46
#define UNIFIED2_RNA_EVENT_USER_UPDATE_ATTRIBUTE    47
#define UNIFIED2_RNA_EVENT_USER_DELETE_ATTRIBUTE    48
#define UNIFIED2_RNA_EVENT_USER_SET_ATTRIBUTE_VALUE 49
#define UNIFIED2_RNA_EVENT_USER_DELETE_ATTRIBUTE_VALUE    50
#define UNIFIED2_RNA_EVENT_CHANGE_TCP_SERVICE_CONFIDENCE  51
#define UNIFIED2_RNA_EVENT_CHANGE_UDP_SERVICE_CONFIDENCE  52
#define UNIFIED2_RNA_EVENT_CHANGE_OS_CONFIDENCE           53
#define UNIFIED2_RNA_FINGERPRINT              54
#define UNIFIED2_RNA_CLIENT_APPLICATION       55
#define UNIFIED2_RNA_CLIENT_APPLICATION_TYPE  56
#define UNIFIED2_RNA_VULNERABILITY      57
#define UNIFIED2_RNA_CRITICALITY        58
#define UNIFIED2_RNA_NETWORK_PROTOCOL   59
#define UNIFIED2_RNA_ATTRIBUTE          60
#define UNIFIED2_RNA_SCAN_TYPE          61
#define UNIFIED2_USERS                  62
#define UNIFIED2_RNA_SERVICE            63
#define UNIFIED2_DETECTION_ENGINE       64
#define UNIFIED2_POLICY_EVENT_V3        65
#define UNIFIED2_SIGNATURE_MESSAGE_V2   66
#define UNIFIED2_CLASSIFICATION_V2      67
#define UNIFIED2_DETECTION_ENGINE_V2    68
#define UNIFIED2_COMPLIANCE_POLICY      69
#define UNIFIED2_COMPLIANCE_RULE        70
#define UNIFIED2_RNA_EVENT_FLOW_FLOW_STATS  71
#define UNIFIED2_RNA_EVENT_FLOW_FLOW_CHUNK  73
#define UNIFIED2_RNA_EVENT_USER_SET_OS      74
#define UNIFIED2_RNA_EVENT_USER_SET_SERVICE 75
#define UNIFIED2_RNA_EVENT_USER_DELETE_PROTOCOL   76
#define UNIFIED2_RNA_EVENT_USER_DELETE_CLIENT_APP 77
#define UNIFIED2_RNA_EVENT_USER_DELETE_ADDR_V2    78
#define UNIFIED2_RNA_EVENT_USER_DELETE_SERVICE_V2 79
#define UNIFIED2_RNA_EVENT_USER_VULN_VALID_V2     80
#define UNIFIED2_RNA_EVENT_USER_VULN_INVALID_V2   81
#define UNIFIED2_RNA_EVENT_USER_SET_CRITICALITY_V2 82
#define UNIFIED2_RNA_EVENT_USER_SET_ATTRIBUTE_VALUE_V2 83
#define UNIFIED2_RNA_EVENT_USER_DELETE_ATTRIBUTE_VALUE_V2 84
#define UNIFIED2_RNA_EVENT_USER_ADD_HOST        85
#define UNIFIED2_RNA_EVENT_USER_ADD_SERVICE     86
#define UNIFIED2_RNA_EVENT_USER_ADD_CLIENT_APP  87
#define UNIFIED2_RNA_EVENT_USER_ADD_PROTOCOL    88
#define UNIFIED2_RNA_EVENT_USER_ADD_SCAN_RESULT 89
#define UNIFIED2_RNA_SOURCE_TYPE                90
#define UNIFIED2_RNA_SOURCE_APP                 91
#define UNIFIED2_RUA_EVENT_CHANGE_USER_DROPPED  92
#define UNIFIED2_RUA_EVENT_CHANGE_USER_REMOVE   93
#define UNIFIED2_RUA_EVENT_NEW_USER_ID          94
#define UNIFIED2_RUA_EVENT_CHANGE_USER_LOGIN    95
#define UNIFIED2_RNA_SOURCE_DETECTOR            96
#define UNIFIED2_POLICY_EVENT_V5                97
#define UNIFIED2_RUA_USER                       98
#define UNIFIED2_RNA_EVENT_NEW_OS              101
#define UNIFIED2_RNA_EVENT_CHANGE_IDENTITY_CONFLICT 102
#define UNIFIED2_RNA_EVENT_CHANGE_IDENTITY_TIMEOUT  103
#define UNIFIED2_SCAN_VULNERABILITY                 106
#define UNIFIED2_RNA_EVENT_CHANGE_CLIENT_APP_UPDATE 107
#define UNIFIED2_RNA_PAYLOAD_TYPE    108
#define UNIFIED2_RNA_PAYLOAD         109
#define UNIFIED2_EXTRA_DATA_TYPE     111
#define UNIFIED2_POLICY_EVENT_V6     112
#define UNIFIED2_RUA_EVENT           113
#define UNIFIED2_RUA_EVENT_FAILED_USER_LOGIN 114
#define UNIFIED2_ZONE_NAME       115
#define UNIFIED2_INTERFACE_NAME  116
#define UNIFIED2_FW_POLICY_NAME  117
#define UNIFIED2_IDS_POLICY_NAME 118

#define UNIFIED2_FW_RULE_ID         119
#define UNIFIED2_FW_RULE_ACTION     120
#define UNIFIED2_FW_URL_CATEGORY    121
#define UNIFIED2_FW_URL_REPUTATION  122
#define UNIFIED2_SENSOR             123
#define UNIFIED2_FW_RULE_REASON     124

#define UNIFIED2_FIREAMP_EVENT      125
#define UNIFIED2_FIREAMP_HOST_EVENT 126
#define UNIFIED2_FIREAMP_CLOUD_NAME 127
#define UNIFIED2_FIREAMP_EVENT_TYPE 128
#define UNIFIED2_FIREAMP_EVENT_SUBTYPE 129
#define UNIFIED2_FIREAMP_DETECTOR_TYPE 130
#define UNIFIED2_FIREAMP_FILE_TYPE  131

#define UNIFIED2_IPS_RULE_DOC       140

#define UNIFIED2_USER_IP_MAP            150
#define UNIFIED2_USER_IP_MAP_UPDATE     151
#define UNIFIED2_USER_GROUP_MAP         152
#define UNIFIED2_USER_GROUP_MAP_UPDATE  153
#define UNIFIED2_USER_MAP_UPDATE        154
#define UNIFIED2_USER_SNAPSHOT          155
#define UNIFIED2_USER_GROUP_SNAPSHOT    156
#define UNIFIED2_USER_GROUP_CTRL_MSG    157

#define UNIFIED2_RNA_EVENT_IOC_SET  160
#define UNIFIED2_IOC_NAME           161
#define UNIFIED2_RNA_EVENT_USER_IOC_DELETE 162
#define UNIFIED2_RNA_EVENT_USER_IOC_ENABLE 163
#define UNIFIED2_RNA_EVENT_USER_IOC_DISABLE 164

#define UNIFIED2_FW_EVENT_START  200
#define UNIFIED2_FW_EVENT_END    210
#define UNIFIED2_FW_APP_STATS    220
#define UNIFIED2_FW_USER_STATS   230
#define UNIFIED2_FW_URLCAT_STATS 240
#define UNIFIED2_FW_URLREP_STATS 250

#define UNIFIED2_ICMP_TYPE       260
#define UNIFIED2_ICMP_CODE       270
#define UNIFIED2_IPREP_CATEGORY  280
#define UNIFIED2_IPREP_SRCDEST   281

#define UNIFIED2_FILELOG_EVENT           500 
#define UNIFIED2_FILELOG_MALWARE_EVENT   502 
#define UNIFIED2_FILELOG_FILE_TYPE       510
#define UNIFIED2_FILELOG_SHA             511
#define UNIFIED2_FILE_EXTRACT_EVENT      512
#define UNIFIED2_FILE_STORAGE_STATS      514
#define UNIFIED2_FILELOG_STORAGE         515
#define UNIFIED2_FILELOG_SANDBOX         516
#define UNIFIED2_FILELOG_SPERO           517

#define UNIFIED2_GEOLOCATION             520

#define UNIFIED2_FILE_POLICY_NAME   530

/* UEC Defines */
#define UNIFIED2_UEC_HELLO_410       4000
#define UNIFIED2_UEC_REPLY_410       4001
#define UNIFIED2_UEC_BUNDLE          4002
#define UNIFIED2_UEC_RUA_EVENT       4003
#define UNIFIED2_UEC_RESET           4004
#define UNIFIED2_UEC_HELLO           4010
#define UNIFIED2_UEC_REPLY           4011
#define UNIFIED2_UEC_UPDATE          4012

//Estreamer support only. Adds the time of archiving events
typedef struct _Serial_Unified2HeaderExtension
{
    uint32_t timestamp;
    uint32_t checksum;
} Serial_Unified2HeaderExtension;


typedef struct _Serial_Unified2_Header_Extended
{
    uint32_t   type;
    uint32_t   length;
    uint32_t   timestamp;
    uint32_t   checksum;
} Serial_Unified2_Header_Extended;

typedef struct _Serial_Unified2
{
    uint32_t type;
    uint32_t length;
    uint8_t  data[4];
} Serial_Unified2;


typedef struct _Serial_Unified2_Extended
{
    uint32_t type;
    uint32_t length;
    uint32_t timestamp;
    uint32_t checksum;
    uint8_t  data[4];
} Serial_Unified2_Extended;

//End Estreamer support
/**
    Product serialization support
*/

//Data structure to hold de-serialized U2 record
typedef struct _Unified2Record
{
    uint32_t type;
    uint32_t timestamp;
    uint32_t length;
    uint8_t *data;
} Unified2Record;


int Unified2Record_Destroy(Unified2Record *u2_record);

//Used by SFDC Agent handler only
int Unified2Record_Deserialize(uint8_t *buffer, uint32_t length,
                               Unified2Record **u2_record, int copy_data);

//used by EStreamer only
int Unified2Record_Serialize(Unified2Record *u2_record, int options,
                             uint8_t **buffer, uint32_t *length);


/*@}*/
#endif /* __UNIFIED2_H__ */

