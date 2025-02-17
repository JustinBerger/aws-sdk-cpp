﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{
  enum class MediaPipelineStatus
  {
    NOT_SET,
    Initializing,
    InProgress,
    Failed,
    Stopping,
    Stopped,
    Paused
  };

namespace MediaPipelineStatusMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API MediaPipelineStatus GetMediaPipelineStatusForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForMediaPipelineStatus(MediaPipelineStatus value);
} // namespace MediaPipelineStatusMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
