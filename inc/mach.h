////////////////////////////////////////////////////////////////////////////////
//                 ___           ___           ___           ___              //
//                /__/\         /  /\         /  /\         /__/\             //
//               |  |::\       /  /::\       /  /:/         \  \:\            //
//               |  |:|:\     /  /:/\:\     /  /:/           \__\:\           //
//             __|__|:|\:\   /  /:/~/::\   /  /:/  ___   ___ /  /::\          //
//            /__/::::| \:\ /__/:/ /:/\:\ /__/:/  /  /\ /__/\  /:/\:\         //
//            \  \:\~~\__\/ \  \:\/:/__\/ \  \:\ /  /:/ \  \:\/:/__\/         //
//             \  \:\        \  \::/       \  \:\  /:/   \  \::/              //
//              \  \:\        \  \:\        \  \:\/:/     \  \:\              //
//               \  \:\        \  \:\        \  \::/       \  \:\             //
//                \__\/         \__\/         \__\/         \__\/             //
//                                                                            //
//             -------------------------------------------------------        //
//                0x74 0x73 0x74 0x65 0x69 0x6e 0x68 0x6f 0x6c 0x7a           //
//                                                                            //
//                      Reference LICENSE.md for licensing.                   //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#ifdef MACH_H
#define MACH_H


#define MAX_PEERS 100 ///< The maximum number of peers a participant can have.


////////////////////////////////////////////////////////////////////////////////
/// A peer is a reference to another Network Participant.
////////////////////////////////////////////////////////////////////////////////
typedef struct
{
    uint8_t latency;    ///< The latency or ping of the peer in ms.
    // TODO.
} mach_peer_t;

////////////////////////////////////////////////////////////////////////////////
/// A Network Participant Struct represents a participant of a given mach
/// network.
////////////////////////////////////////////////////////////////////////////////
typedef struct
{
    uint64_t network_id; ///< The ID of a given MACH Network.
    // TODO.
} mach_participant_t;

////////////////////////////////////////////////////////////////////////////////
/// A Network Peer represents one of the peers the Network Participant would be
/// connected to. Packets are relaye to and from the Network Participant's
/// peers.
////////////////////////////////////////////////////////////////////////////////
typedef struct
{
    uint16_t latency; ///< The Ping latency of a given peer.
    // TODO.
} mach_peer_t;

// TODO.

#endif //MACH_H
