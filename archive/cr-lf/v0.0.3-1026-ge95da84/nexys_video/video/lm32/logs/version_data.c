
#ifndef PLATFORM_NEXYS_VIDEO
#error "Version mismatch - PLATFORM_NEXYS_VIDEO not defined!"
#endif
const char* board = "nexys_video";

#ifndef TARGET_VIDEO
#error "Version mismatch - TARGET_VIDEO not defined!"
#endif
const char* target = "video";

const char* git_commit = "e95da843abf0c6b0f480e6f0c85d3ec6b2d3d91c";
const char* git_branch = "cr-lf";
const char* git_describe = "v0.0.3-1026-ge95da84-dirty";
const char* git_status =
    "    --\r\n"
   "     ? ../../../../third_party/litepcie\r\n"
   "     ? ../../../../third_party/litesata\r\n"
   "     ? ../../../../third_party/liteusb\r\n"
    "    --\r\n";

