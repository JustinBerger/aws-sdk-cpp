﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/FunctionUrlConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lambda
{
namespace Model
{

FunctionUrlConfig::FunctionUrlConfig() : 
    m_functionUrlHasBeenSet(false),
    m_functionArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_corsHasBeenSet(false),
    m_authorizationType(AuthorizationType::NOT_SET),
    m_authorizationTypeHasBeenSet(false)
{
}

FunctionUrlConfig::FunctionUrlConfig(JsonView jsonValue) : 
    m_functionUrlHasBeenSet(false),
    m_functionArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_corsHasBeenSet(false),
    m_authorizationType(AuthorizationType::NOT_SET),
    m_authorizationTypeHasBeenSet(false)
{
  *this = jsonValue;
}

FunctionUrlConfig& FunctionUrlConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FunctionUrl"))
  {
    m_functionUrl = jsonValue.GetString("FunctionUrl");

    m_functionUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FunctionArn"))
  {
    m_functionArn = jsonValue.GetString("FunctionArn");

    m_functionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetString("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetString("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Cors"))
  {
    m_cors = jsonValue.GetObject("Cors");

    m_corsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthorizationType"))
  {
    m_authorizationType = AuthorizationTypeMapper::GetAuthorizationTypeForName(jsonValue.GetString("AuthorizationType"));

    m_authorizationTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue FunctionUrlConfig::Jsonize() const
{
  JsonValue payload;

  if(m_functionUrlHasBeenSet)
  {
   payload.WithString("FunctionUrl", m_functionUrl);

  }

  if(m_functionArnHasBeenSet)
  {
   payload.WithString("FunctionArn", m_functionArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("CreationTime", m_creationTime);

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithString("LastModifiedTime", m_lastModifiedTime);

  }

  if(m_corsHasBeenSet)
  {
   payload.WithObject("Cors", m_cors.Jsonize());

  }

  if(m_authorizationTypeHasBeenSet)
  {
   payload.WithString("AuthorizationType", AuthorizationTypeMapper::GetNameForAuthorizationType(m_authorizationType));
  }

  return payload;
}

} // namespace Model
} // namespace Lambda
} // namespace Aws
