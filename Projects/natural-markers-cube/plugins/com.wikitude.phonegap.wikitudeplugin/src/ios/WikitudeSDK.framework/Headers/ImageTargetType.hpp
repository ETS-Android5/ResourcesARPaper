//
//  ImageTargetType.hpp
//  WikitudeUniversalSDK
//
//  Created by Aitor Font on 02.10.19.
//  Copyright © 2019 Wikitude. All rights reserved.
//

#ifndef ImageTargetType_hpp
#define ImageTargetType_hpp

#ifdef __cplusplus

#include "CompilerAttributes.hpp"


namespace wikitude { namespace sdk {

    namespace impl {

        /**
         * @brief Use this enum to determine the type of a image target that was detected by the image tracker.
         */
        enum class WT_EXPORT_API ImageTargetType {
            /** Image: The detected image target is an image. */
            Image,
            /** Cube: The detected image target is a cylinder. */
            Cube
        };
    }
    using impl::ImageTargetType;
}}

#endif /* __cplusplus */

#endif /* ImageTargetType_hpp */
