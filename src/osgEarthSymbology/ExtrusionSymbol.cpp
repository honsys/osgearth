/* -*-c++-*- */
/* osgEarth - Dynamic map generation toolkit for OpenSceneGraph
 * Copyright 2008-2010 Pelican Mapping
 * http://osgearth.org
 *
 * osgEarth is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 */
#include <osgEarthSymbology/ExtrusionSymbol>

using namespace osgEarth;
using namespace osgEarth::Symbology;

ExtrusionSymbol::ExtrusionSymbol( const Config& conf ) :
_offset( 0.0 ),
_height( 1.0 )
{
    if ( !conf.empty() )
        mergeConfig(conf);
}

Config 
ExtrusionSymbol::getConfig() const {
    Config conf( "extrusion" );
    conf.addIfSet( "offset", _offset );
    conf.addIfSet( "height", _height );
    return conf;
}

void 
ExtrusionSymbol::mergeConfig( const Config& conf ) {
    conf.getIfSet( "offset", _offset );
    conf.getIfSet( "height", _height );
}