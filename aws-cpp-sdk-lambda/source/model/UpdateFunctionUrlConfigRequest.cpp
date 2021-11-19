﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/UpdateFunctionUrlConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

UpdateFunctionUrlConfigRequest::UpdateFunctionUrlConfigRequest() : 
    m_functionNameHasBeenSet(false),
    m_qualifierHasBeenSet(false),
    m_authorizationType(AuthorizationType::NOT_SET),
    m_authorizationTypeHasBeenSet(false),
    m_corsHasBeenSet(false)
{
}

Aws::String UpdateFunctionUrlConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_authorizationTypeHasBeenSet)
  {
   payload.WithString("AuthorizationType", AuthorizationTypeMapper::GetNameForAuthorizationType(m_authorizationType));
  }

  if(m_corsHasBeenSet)
  {
   payload.WithObject("Cors", m_cors.Jsonize());

  }

  return payload.View().WriteReadable();
}

void UpdateFunctionUrlConfigRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_qualifierHasBeenSet)
    {
      ss << m_qualifier;
      uri.AddQueryStringParameter("Qualifier", ss.str());
      ss.str("");
    }

}



