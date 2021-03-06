﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/kendra/model/TextDocumentStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

TextDocumentStatistics::TextDocumentStatistics() : 
    m_indexedTextDocumentsCount(0),
    m_indexedTextDocumentsCountHasBeenSet(false),
    m_indexedTextBytes(0),
    m_indexedTextBytesHasBeenSet(false)
{
}

TextDocumentStatistics::TextDocumentStatistics(JsonView jsonValue) : 
    m_indexedTextDocumentsCount(0),
    m_indexedTextDocumentsCountHasBeenSet(false),
    m_indexedTextBytes(0),
    m_indexedTextBytesHasBeenSet(false)
{
  *this = jsonValue;
}

TextDocumentStatistics& TextDocumentStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IndexedTextDocumentsCount"))
  {
    m_indexedTextDocumentsCount = jsonValue.GetInteger("IndexedTextDocumentsCount");

    m_indexedTextDocumentsCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IndexedTextBytes"))
  {
    m_indexedTextBytes = jsonValue.GetInt64("IndexedTextBytes");

    m_indexedTextBytesHasBeenSet = true;
  }

  return *this;
}

JsonValue TextDocumentStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_indexedTextDocumentsCountHasBeenSet)
  {
   payload.WithInteger("IndexedTextDocumentsCount", m_indexedTextDocumentsCount);

  }

  if(m_indexedTextBytesHasBeenSet)
  {
   payload.WithInt64("IndexedTextBytes", m_indexedTextBytes);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
