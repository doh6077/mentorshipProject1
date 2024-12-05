#pragma once

#include "Entity.h"

using ENtityVec = std::vector<std::shared_ptr<Entity>>;
class EntityManager
{
	EntityVec m_entities;
	EntityVec m_entitiesToAdd;
	std::map<std::string, EntityVec> m_entityMap;
	size_t    m_totalEntities = 0;

}