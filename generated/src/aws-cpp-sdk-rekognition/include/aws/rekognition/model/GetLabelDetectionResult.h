﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/VideoJobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/VideoMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/LabelDetection.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{
  class GetLabelDetectionResult
  {
  public:
    AWS_REKOGNITION_API GetLabelDetectionResult();
    AWS_REKOGNITION_API GetLabelDetectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API GetLabelDetectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current status of the label detection job.</p>
     */
    inline const VideoJobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The current status of the label detection job.</p>
     */
    inline void SetJobStatus(const VideoJobStatus& value) { m_jobStatus = value; }

    /**
     * <p>The current status of the label detection job.</p>
     */
    inline void SetJobStatus(VideoJobStatus&& value) { m_jobStatus = std::move(value); }

    /**
     * <p>The current status of the label detection job.</p>
     */
    inline GetLabelDetectionResult& WithJobStatus(const VideoJobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The current status of the label detection job.</p>
     */
    inline GetLabelDetectionResult& WithJobStatus(VideoJobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline GetLabelDetectionResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline GetLabelDetectionResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>If the job fails, <code>StatusMessage</code> provides a descriptive error
     * message.</p>
     */
    inline GetLabelDetectionResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>Information about a video that Amazon Rekognition Video analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * a Amazon Rekognition video operation.</p>
     */
    inline const VideoMetadata& GetVideoMetadata() const{ return m_videoMetadata; }

    /**
     * <p>Information about a video that Amazon Rekognition Video analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * a Amazon Rekognition video operation.</p>
     */
    inline void SetVideoMetadata(const VideoMetadata& value) { m_videoMetadata = value; }

    /**
     * <p>Information about a video that Amazon Rekognition Video analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * a Amazon Rekognition video operation.</p>
     */
    inline void SetVideoMetadata(VideoMetadata&& value) { m_videoMetadata = std::move(value); }

    /**
     * <p>Information about a video that Amazon Rekognition Video analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * a Amazon Rekognition video operation.</p>
     */
    inline GetLabelDetectionResult& WithVideoMetadata(const VideoMetadata& value) { SetVideoMetadata(value); return *this;}

    /**
     * <p>Information about a video that Amazon Rekognition Video analyzed.
     * <code>Videometadata</code> is returned in every page of paginated responses from
     * a Amazon Rekognition video operation.</p>
     */
    inline GetLabelDetectionResult& WithVideoMetadata(VideoMetadata&& value) { SetVideoMetadata(std::move(value)); return *this;}


    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * labels.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * labels.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * labels.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * labels.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * labels.</p>
     */
    inline GetLabelDetectionResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * labels.</p>
     */
    inline GetLabelDetectionResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of
     * labels.</p>
     */
    inline GetLabelDetectionResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of labels detected in the video. Each element contains the detected
     * label and the time, in milliseconds from the start of the video, that the label
     * was detected. </p>
     */
    inline const Aws::Vector<LabelDetection>& GetLabels() const{ return m_labels; }

    /**
     * <p>An array of labels detected in the video. Each element contains the detected
     * label and the time, in milliseconds from the start of the video, that the label
     * was detected. </p>
     */
    inline void SetLabels(const Aws::Vector<LabelDetection>& value) { m_labels = value; }

    /**
     * <p>An array of labels detected in the video. Each element contains the detected
     * label and the time, in milliseconds from the start of the video, that the label
     * was detected. </p>
     */
    inline void SetLabels(Aws::Vector<LabelDetection>&& value) { m_labels = std::move(value); }

    /**
     * <p>An array of labels detected in the video. Each element contains the detected
     * label and the time, in milliseconds from the start of the video, that the label
     * was detected. </p>
     */
    inline GetLabelDetectionResult& WithLabels(const Aws::Vector<LabelDetection>& value) { SetLabels(value); return *this;}

    /**
     * <p>An array of labels detected in the video. Each element contains the detected
     * label and the time, in milliseconds from the start of the video, that the label
     * was detected. </p>
     */
    inline GetLabelDetectionResult& WithLabels(Aws::Vector<LabelDetection>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * <p>An array of labels detected in the video. Each element contains the detected
     * label and the time, in milliseconds from the start of the video, that the label
     * was detected. </p>
     */
    inline GetLabelDetectionResult& AddLabels(const LabelDetection& value) { m_labels.push_back(value); return *this; }

    /**
     * <p>An array of labels detected in the video. Each element contains the detected
     * label and the time, in milliseconds from the start of the video, that the label
     * was detected. </p>
     */
    inline GetLabelDetectionResult& AddLabels(LabelDetection&& value) { m_labels.push_back(std::move(value)); return *this; }


    /**
     * <p>Version number of the label detection model that was used to detect
     * labels.</p>
     */
    inline const Aws::String& GetLabelModelVersion() const{ return m_labelModelVersion; }

    /**
     * <p>Version number of the label detection model that was used to detect
     * labels.</p>
     */
    inline void SetLabelModelVersion(const Aws::String& value) { m_labelModelVersion = value; }

    /**
     * <p>Version number of the label detection model that was used to detect
     * labels.</p>
     */
    inline void SetLabelModelVersion(Aws::String&& value) { m_labelModelVersion = std::move(value); }

    /**
     * <p>Version number of the label detection model that was used to detect
     * labels.</p>
     */
    inline void SetLabelModelVersion(const char* value) { m_labelModelVersion.assign(value); }

    /**
     * <p>Version number of the label detection model that was used to detect
     * labels.</p>
     */
    inline GetLabelDetectionResult& WithLabelModelVersion(const Aws::String& value) { SetLabelModelVersion(value); return *this;}

    /**
     * <p>Version number of the label detection model that was used to detect
     * labels.</p>
     */
    inline GetLabelDetectionResult& WithLabelModelVersion(Aws::String&& value) { SetLabelModelVersion(std::move(value)); return *this;}

    /**
     * <p>Version number of the label detection model that was used to detect
     * labels.</p>
     */
    inline GetLabelDetectionResult& WithLabelModelVersion(const char* value) { SetLabelModelVersion(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetLabelDetectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetLabelDetectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetLabelDetectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    VideoJobStatus m_jobStatus;

    Aws::String m_statusMessage;

    VideoMetadata m_videoMetadata;

    Aws::String m_nextToken;

    Aws::Vector<LabelDetection> m_labels;

    Aws::String m_labelModelVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
